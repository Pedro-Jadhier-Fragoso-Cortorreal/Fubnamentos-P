#include <stdio.h>
#include <math.h>

void main (void)
{
    int T, P, N;
    printf("ingrese los valores de T, P y N: ");
    scanf("%d %d %d", &T, &P, &N);
    if (P != 0)
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
            printf("\nNo se comprueba la igualdad");

    }
    else
        printf("\nP tiene que ser diferente de cero");

}
