#include <stdio.h>
int suma_arreglo(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int fibonacci[50];
    int impares[50];
    int pares[50];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < 50; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    int num_impares = 0;
    int num_pares = 0;

    for (int i = 0; i < 50; i++) {
        if (fibonacci[i] % 2 == 0) {
            pares[num_pares] = fibonacci[i];
            num_pares++;
        } else {
            impares[num_impares] = fibonacci[i];
            num_impares++;
        }
    }
    printf("Impares: ");
    for (int i = 0; i < num_impares - 1; i++) {
        printf("%d, ", impares[i]);
    }
    if (num_impares > 0) {
        printf("%d\n", impares[num_impares - 1]);
    } else {
        printf("No hay números impares.\n");
    }
    printf("Pares: ");
    for (int i = 0; i < num_pares - 1; i++) {
        printf("%d, ", pares[i]);
    }
    if (num_pares > 0) {
        printf("%d\n", pares[num_pares - 1]);
    } else {
        printf("No hay números pares.\n");
    }
    int suma_impares = suma_arreglo(impares, num_impares);
    int suma_pares = suma_arreglo(pares, num_pares);
    printf("Suma de impares: %d\n", suma_impares);
    printf("Suma de pares: %d\n", suma_pares);

    return 0;
}

