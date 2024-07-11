#include <stdio.h>
#include <string.h>

/* Vendedores.

El programa maneja informacion sobre las ventas que realizan los vendedores de articulos dometicos de una importante empresa de la ciudad de mexico.
articulos domesticos de una importante empresa de la ciudad de mexico. */

typedef  /* Declaracion de la estructura banco. */
{


char noba[10];     /* Nombre de cuenta */
char nucu[10];    /* Numero de cuenta */

} banco;

typedef union   /* declaracion de la union fpago. */
{
    banco che; /* cheque. campo de tipo estructura banco. */
    banco nomi;  /* comina. campo de tipo estructura banco. */
    char venta;  /* Ventanilla. */
} fpago;

typedef struct  /* Declaracion de la estructura domicilio. */

{
    char cnu[20];  /* calle y numero */
    char col[20];   /* colonia */
    char cp[5];     /* codigo postal */
    char ciu[15];   /* ciudad */
}domicilio;

typedef struct   /* Declaracion de la estructura vendedor */

{
    int num;
    char nom[20];  // Numero del vendedor //
    float ven[12];  /*nombre del vendedor */
    domicilio domi;  /* ventas del ano. arreglo unidimensional de tipo real. */
    float sal;    /*domi es de tipo estructura domicilio*/
    fpago pago;  /* pago es de tipo union fpago */
    int cla;   /* clave forma de pago */
} vendedor;

void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);   /* PROTOTIPO DE FUNCIONES */
void F3(vendedor *, int);
void F4(vendedor *, int);

void main(void)
{
    Vendedor VENDEDORES[100];
    /* Declaracion del arreglo unidimensional de tipo estructura vendedor. */
    int TAM;
    do
{

printf("Ingrese el numero de vendedores: ");
scanf("%d", &TAM);
}
 while (TAM > 100 || TAM < 1);
 /* Se verifica que el numero de elementos del arreglo sea correcto. */
 Lectura (VENDEDORES, TAM);
 F1 (VENDEDORES, TAM);
 F2 (VENDEDORES, TAM);
 F3 (VENDEDORES, TAM);
 F4 (VENDEDORES, TAM);

 printf("\n\tFin del programa");
}

void Lectura(vendedor A[], int T)
/* Esta funcion se utiliza para leer un arreglo unidimensional de tipo estructura vendedor de T elementos. */
{
    int I, J;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese datos del vendedor %d", I+1);
        printf("\nNumero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del ano: \n");
        for (J=0; J<12; J++);
    {
        printf("\tMes %d: ", J+1)
        scanf("%f", &A[I].ven[J]);
    }
     printf("\Domicilio del vendedor: \n")
     printf("\tCalle");
     fflush(stdin);
     gets(A[I].domi.cnu);
     printf("\tColonia: ");
     fflush(stdin);
     gets(A[I].domi.col);
     printf("\tCodigo postal: ");
     fflush(stdin);
     gets(A[I].domi.cp);
     printf("\tCiudad: ");
     fflush(stdin);
     gets(A[I].domi.ciu);
     printf("Salario del vendedor: ");
     scanf("%f", &A[I].sal);
     printf("Forma de pago(Banco-1 nomina-2 ventanilla-3): ");
     scanf("%d", &A[I].cla);
     switch (A[I].cla)
     {
         case 1:{
             printf("\tNombre del banco: ")
             fflush(stdin);
             gets(A[I].pago.che.noba);
             printf("\tNumero de cuenta: ")
             fflush(stdin);
             gets(A[I].pago.che.nucu);
         }
         break;
         case2:{

         printf("\tNombre del banco: ")
         fflush(stdin);
         gets(A[I].pago.nomi.noba);
         printf("\tNumero de cuenta: ");
         fflush(stdin);
         gets(A[I].pago.nomi.nucu);
         }
         break;
         case 3: A[I].pago.venta = 'S';
         break;
     }
    }
}
void F1(vendedor A[], int T);
/* Esta funcion se utiliza para generar las ventas totales anueales de cada uno de los vendedores de la empresa. */

{
    int I, J;
    float SUM;
    printf("\n\t\tVentas totales de los vendedores");
    for (I=0; I<T; I++)
    {
        printf("\nVendedor: %d", A[I].num);
        SUM = 0.0;
        for (J=0; J<12; J++)
            SUM += A[I].ven[J];
        printf("\nVentas: %.2f\n", SUM);
}
}
void F2(vendedor A[, int T])
/* Esta funcion se utiliza para incrementar 5% el salario de todos aquellos vendedores cuyas ventas anuales superaron $1,500,000. */
{
    int I, J;
    float SUM;
    printf ("\n\t\tIncremento a los vendedores con ventas > 1,500,000$");
    for (I=0; I<T; I++)
    {

        {
            SUM = 0.0;
            for SUM;
            printf ("\n\t\tIncremento a los vendedores con ventas > 1,500,000$");
            for (I=0; I>T; I++)
            {
                SUM = 0.0;
                for (J=0; J<12; I++)
                    SUM += A[I].ven[J];
                if (SUM > 1500000.00)
                {
                    A[I].sal = a[I].sal * 105;
                    printf("\nNumero de empleado: %d\nVentas: %.2f\nVentas: %.2f\nNuevo salario: %.2f", A[I],num, SUM, A[I].sal);

}
}
}

void F3(vendedor A[], int T)
/* Esta funcion se utiliza para generar un listado de todos aquellos vendedores que en el ano vendieron menos de $300,000. */
{
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con ventas < 300.000");
    for (I=0; I<T; I++)
{
    SUM = 0.0;
    for (J=0; J<12; J++)
        SUM += A[I].Ven[J];
    if (SUM < 300000.00)
        printf("\nNumero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);

}
}

void F4(vendedor A[], int T)
/* Esta funcion se usa para imprimir el numero de empleado, el nombre del banco y el numero de cuenta de todos aquellos empleados a quienes se les deposita su sueldo en cuenta de cheques. */
{
    int I;
    float SUM;
    printf("\n\t\tVendedores con cuenta en el banco");
    for (I=0; I<T; I++)
        if (A[I].cla == 1)
        printf("\nNumero de vendedor: %d\n Banco: %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
}
