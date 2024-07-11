#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[50];
    int matricula;
    float nota;
} Alumno;

void grabarDato(FILE *archivo);
void leerArchivo(FILE *archivo);

int main() {
    FILE *archivo;
    int opcion = 1;

    archivo = fopen("datos.dat", "ab+");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    while (opcion != 0) {
        printf("\nMenu:\n");
        printf("0 - Salir\n");
        printf("1 - Grabar Dato\n");
        printf("2 - Leer Archivo\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        while(getchar() != '\n');

        if (opcion == 1) {
            grabarDato(archivo);
        } else if (opcion == 2) {
            leerArchivo(archivo);
        } else if (opcion != 0) {
            printf("Opcion no valida.\n");
        }
    }

    printf("Saliendo del programa.\n");
    fclose(archivo);
    return 0;
}

void grabarDato(FILE *archivo) {
    Alumno *alumno;
    alumno = (Alumno *)malloc(sizeof(Alumno));

    if (alumno == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    printf("Ingrese nombre del alumno: ");
    scanf(" %[^\n]", alumno->nombre);

    while(getchar() != '\n');

    printf("Ingrese matricula del alumno: ");
    scanf("%d", &alumno->matricula);

    printf("Ingrese nota del alumno: ");
    scanf("%f", &alumno->nota);

    fwrite(alumno, sizeof(Alumno), 1, archivo);

    free(alumno);
}

void leerArchivo(FILE *archivo) {
    Alumno *alumno;
    alumno = (Alumno *)malloc(sizeof(Alumno));

    if (alumno == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }

    printf("\nDatos almacenados en el archivo:\n");
    rewind(archivo);

    while (fread(alumno, sizeof(Alumno), 1, archivo) == 1) {
        printf("Nombre: %s, Matricula: %d, Nota: %.2f\n", alumno->nombre, alumno->matricula, alumno->nota);
    }

    free(alumno);
}
