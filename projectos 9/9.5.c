#include <stdio.h>

/* archivos con variables enteras y reales
el programa almacena datos de un grupo de alumnos en un archivo */

void main(void)
{
    int i, j, n,  mat;
    float cal;
    FILE *ar;
    printf("\nIngrese el numero de alumnos: ");
    scanf("%d", &n);
    /* Se asume que el valor que ingrese el usuario esta comprendido entre 1 y 35 */
    if ((ar = fopen("arc8.txt", "w")) != NULL)
    {
        fprintf(ar,"%d ", n);  /* se escribe el numero de alumnos en el archivo */
        for (i=0; i<n; i++)
        {
            printf("\nIngrese la matricula del alumno %d: ", i+1);
            scanf("%d", &mat);
            fprintf(ar,"\n%d ", mat); /* se escribe la matricula en el archivo */
            for (j=0; j<5; j++)
            {
                printf("\nCalificacion %d: ", j+1);
                scanf("%f", &cal);
                fprintf(ar,"%.2f ",cal);  /* se escriben las califiaciones en el archivo */
            }
            fclose(ar);
        }
        else
            printf("No se puede abrir el archivo")
}
}
