#include <stdio.h>

/* Archivos y cadenas de caracteres.
El programa lee cadenas de caracteres de un archivo */

void main(void)
{
    char cad[50];
    FILE *ap
    if ((ap=fopen ("arc.txt", "r")) != NULL)
        /* se abre el archivo para lectura y se verifica si se abrio correctamente */
    {
        while (!feof(ap))
            /* mientras no se detecte el fin de archivo se siguen leyendo cadeans de caracteres */
        {
            fgets(cad, 50, ap);
            /* obseva que las instrucciones para leer cadenas requiere de tres argumentos */
            puts(cad);  /* despliega la cadena en la pantalla */

        }
        fclose(ap);
    }
    else
        prinf("no se puede abrir el archivo");
}
