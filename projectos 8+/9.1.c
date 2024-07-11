#include <stdio.h>

/* Archivos y caracteres.
El programa escribe caracteres en un archivo */

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "W");   /* Se abre el archivo arc.txt para escritura . */
    if (ar != NULL)
    {
        while ((p1=getchar()) !=NULL)  /* se abre el archivo para lectura. *
            /* Observa que las dos intrucciones del programa necesarias para abrir un archivo y verificar que este en realidad se haya abierto, se puede agrupar en una sola instruccion */
        {
            while (!feof(ar))
                /* Se leen caracteres del archivo mienstras no se detecte el fin del archivo. */
            {
                p1 = fgetc(ar);  /* Lee el caracter del archivo */
                putchar(p1);  /* Despliega el caracter en la pantalla */
            }
            fclose(ar);
        }
        else
            printf("No se puede abrir el archivo");
    }
}
