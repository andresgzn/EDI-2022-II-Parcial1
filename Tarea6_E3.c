#include <stdio.h>
//#define N 10
#define N 15
//#define N 20

void mayorymenor(int *mayor, int *menor);

int main()
{
    int mayor, menor;

    printf("---- NUMERO MAYOR Y MENOR ----\n");

    mayorymenor(&mayor, &menor);

    printf("\n");

    printf("------------------------------\n");
    printf("El numero mayor es el: %d\n", mayor);
    printf("------------------------------\n");

    printf("------------------------------\n");
    printf("El numero menor es el: %d\n", menor);
    printf("------------------------------\n");

    return 0;
}

void mayorymenor(int *mayor, int *menor)
{
    int numero, i;

    for(i = 0; i < N; i++)
    {
        printf(" Escribe un numero: ");
        scanf("%d", &numero);

        printf("\n");

        if(i == 0)
        {
            *mayor=numero;
            *menor=numero;
        }

        if(numero > *mayor)
            *mayor = numero;
        else if(numero < *menor)
            *menor = numero;
    }
}