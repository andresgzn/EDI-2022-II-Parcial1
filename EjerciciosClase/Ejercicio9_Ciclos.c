/*
 Pedir dos numeros al usuario e imprimir los numeros pares que se encuentren entre estos
 numeros. Ej:

     inf - 10
     sup - 25

     Los numeros pares entre estos son: 10, 12, 14, 16, 18, 10, 22, 24
 */

#include <stdio.h>

int main()
{
   int superior, inferior, numero;

    printf("Dame el limite inferior: ");
    scanf("%d", &inferior);

    printf("Dam el limite superior: ");
    scanf("%d", &superior);

    numero=inferior;

    printf("\n");

    printf("Con ciclo while: \n");

    while(numero >= inferior && numero <= superior)
    {
        if (numero % 2 == 0)
            printf("%d, ", numero);

        numero++;
    }

    numero=inferior;

    printf("\n");

    printf("Con ciclo do - while: \n");



    do
    {
        if (numero % 2 == 0)
            printf("%d, ", numero);

        numero++;

    } while (numero >= inferior && numero <= superior);


    printf("\n");

    printf("Con ciclo for: \n");

    for(numero=inferior; numero<=superior; numero++)
    {
        if (numero % 2 == 0)
            printf("%d, ", numero);
    }

    return 0;
}
