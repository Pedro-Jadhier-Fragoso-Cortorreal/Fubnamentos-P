#include <stdio.h>
#include <ctype.h>

/* Letra minusculas y mayusculas
El programa, al recibir como dato un archivo formado por cadenas de caracteres determina el numero de letras minusculas y mayusculas que hay en el archivo */

void minymay(FILE *); /* PROTOTIPO DE FUNCION */
/* Observa que esta funcion va recibir un archivo como parametro */

void main(void)
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        /* se llama a la funcion minymay. se pasa el archivo ar como parametro. */
        fclose(ar);

    }
    else
        printf("No se pudo abrir el archivo");
}

void minymay(FILE *arc)
/* esta funcion cuenta el numero de minusculas y mayusculas que hay en el archivo arc */

{
    int min = 0, may 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc; /* Se utiliza la funcion fgetc para leer caracteres del archivo
        */
        if (islower(p))
            min++;
        else
            if (isupper(p))
            may++?

    }
    printf("\nNumero de minusculas: %d", min);
    printf("\nNumero de mayusculas %d", may);
}
