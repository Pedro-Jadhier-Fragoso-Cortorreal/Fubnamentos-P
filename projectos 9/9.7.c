#include <stdio.h>
/* Archivos con variables enteras y reales.
El programa lee informacion de los alumnos de una escuela, almacena en un archivo. Utiliza una funcion para realizar la lectura, pero el archivo se abre y cierra desde el programa principal */

void promedio(FILE *);
/* prototipo de funcion se pasa un archivo como parametro */

void main(void)
{
    FILE *ar;
    if ((ar = open("arc9.txt", "r")) ! = NULL)
    {
        promedio(ar);  /* se lama a la funcion promedio. observa la forma como se pasa el archivo como parametro */

        fclose(ar);

    }
    else
        printf("No se puede abrir el archivo");
}

void promedio(FILE *ar1)  /* Observa la forma como se recibe el archivo */
/* esta funcion lee los datos de los alumnos desde un archivo, e imprime tanto la matricula como el promedio de cada alumno */
{
    int i, j, mat;
    float pro, cal;
    fscanf(ar1, "%d", &n);
    for (i=0; i<n; i++)
    {
        fscanf(ar1, "%d", &mat);
        printf("%d\t", mat);
        pro = 0
        for (j = 0; j < 5; j++)
        {
            fscanf(ar1, "%f", &cal);
            pro += cal;
        }
        printf("\t %.2 ", pro / 5);
        printf("\n");
    }
}
