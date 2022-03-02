#include <stdio.h>
#define MAX 5

int sumaPosicionesPares(int enteros[MAX]);
int sumaNumerosPares(int enteros[MAX]);
int sumaBajoCien(int enteros[MAX], int *numSumados);

int main()
{
    int suma1 = 0, suma2 = 0, suma3 = 0, numerosSumados = 0;
    int enteros[MAX];

    printf("------------ MAX ENTEROS ------------\n");
    printf("\n");

    for (int i = 0; i < MAX; ++i)
    {
        printf("Dato No. %d:",i+1);
        scanf("%d", &enteros[i]);
    }

    suma1 = sumaPosicionesPares(enteros);
    suma2 = sumaNumerosPares(enteros);
    suma3 = sumaBajoCien(enteros, &numerosSumados);

    printf("\n");
    printf("----------------------------------------------------------------------\n");
    printf("La suma de los numeros de las posiciones pares del arreglo es: %d\n", suma1);
    printf("La suma de los numeros pares del arreglo es: %d\n", suma2);
    printf("Se sumaron %d numeros y el resultado de la suma fue: %d\n", numerosSumados, suma3);
    printf("----------------------------------------------------------------------\n");

    return 0;
}

int sumaPosicionesPares(int enteros[MAX])
{
    int suma = 0;

    for (int i = 0; i < MAX; ++i)
    {
        if(i % 2 == 0)
        {
            suma += enteros[i];
        }
    }

    return (suma);
}

int sumaNumerosPares(int enteros[MAX])
{
    int suma = 0;

    for (int i = 0; i < MAX; ++i)
    {
        if(enteros[i] % 2 == 0)
        {
            suma += enteros[i];
        }

    }

    return (suma);
}

int sumaBajoCien(int enteros[MAX], int *numSumados)
{
    int suma = 0;
    int i = 0;

    do {
        suma += enteros[i];
        i++;
        (*numSumados)++;
    } while (suma < 100);

    suma -= enteros[i-1];
    *numSumados -= 1;

    return (suma);
}

