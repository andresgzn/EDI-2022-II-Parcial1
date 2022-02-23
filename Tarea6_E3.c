#include <stdio.h>
#define N 10
//#define N 15
//#define N 20

void mayorymenor(int *mayor, int *menor);

int main()
{
    int mayor, menor;

    mayorymenor(&mayor, &menor);

    printf("El numero mayor es el: %d\n", mayor);

    printf("El numero menor es el: %d\n", menor);

    return 0;
}

void mayorymenor(int *mayor, int *menor)
{
    int numero1, numero2 = 0, i;

    for(i = 0; i < N; i++)
    {
        printf("Escribe un numero: ");
        scanf("%d", &numero1);

        if(numero1 > numero2)
        {
            *mayor = numero1;
            *menor = numero2;
        }
        else
        {
            *mayor = numero2;
            *menor = numero1;
        }

        numero2 = numero1;

    }
}