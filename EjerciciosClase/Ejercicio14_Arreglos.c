/*
 Arreglos diferentes a char
 Funcion para pedir al usuario los elementos del arreglo
  2. Funcion para pedir al usuario los elementos
  1. Funcion para imprimir los elementos del arreglo
  3. Funcion para obtener el numero mayor y menor
  4. Funcion para obtener el promedio del arreglo
  5. Funcion para imprimir el numero de * que diga el numero en el arreglo
 */

#include <stdio.h>
#define MAX 5

void capturaArreglo(int arr[MAX]);
void imprimeArreglo(int arr[MAX]);
void arregloAlReves(int arr[MAX]);
void mayorMenor(int arr[MAX]);
void promedioArreglo(int arr[MAX]);
void imprimeAsteriscos(int arr[MAX]);

int main()
{
    int arreglo[MAX];

    capturaArreglo(arreglo);
    imprimeArreglo(arreglo);
    arregloAlReves(arreglo);
    //mayorMenor(int arreglo);
    promedioArreglo(arreglo);
    imprimeAsteriscos(arreglo);

    return 0;
}

void capturaArreglo(int arr[MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("Numero de la posicion %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

void imprimeArreglo(int arr[MAX])
{
    printf("[ ");

    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }

    printf(" ]");
    printf("\n");
}

void arregloAlReves(int arr[MAX])
{
    printf("[ ");

    for (int i = MAX-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf(" ]");
    printf("\n");
}

void promedioArreglo(int arr[MAX])
{
    int promedio;

    for (int i = 0; i < MAX; ++i)
    {
        promedio += arr[i];
    }

    promedio /= MAX;

    printf("El promedio es: %.2f\n", promedio);
}

void imprimeAsteriscos(int arr[MAX])
{
    for (int i = 0; i < MAX; ++i)
    {
        for (int j = 1; j <= arr[i]; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}



