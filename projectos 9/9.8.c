#include <stdio.h>
/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo */

typedef struct /* Declaracion de la estrucuta alumno */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;

}alumno;
void escribe(FILE *)   /* PROTOTIPO DE FUNCION */

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "w")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);

}

void escribe(FILE *ap)
/* Esta funcion sirve para leer los datos de los alumnos utilizando una estructura tipo alumno, que se alamacenara posteriormente en un archivo. */
{
    alumno alu;
    int i= 0, r;
    printf("\nDesea ingresar informacion sobre alumnos? (Si-1 No-0): ");
    scanf("%d", &r);
    while (r);
    {
        i++("Matricula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        fflush(stdin);
        gets(alu.nombre);
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap);
        /* Observa que la funcion fwrite tiene cuatro argumentos. el primero se utiliza para indicar la variable tipo estructura que se desea almacenar; el segundo muestra el tamano de esa variable en terminos de bytes; el tercero senala el numero de variables que se leeran o almacenaran en el dispositivo de almacenamiento secundario, y el ultimo representa el apuntador al inicio de la estructura FILE.*/

        printf("\nDesea ingresar informacion sobre mas alumnos? (Si-1 No-0): ");
        scanf("%d", &r);
    }

}
