/*
 Realice un programa en C que imprima si un número dado por
 el usuario es un número perfecto. Un número perfecto es un entero
 positivo que es igual a la suma de sus divisores, excluyendolo a si mismo.

 Modifique el programa anterior para que pida al usuario números a validar
 hasta que el número que capture sea 0.
 */

#include <stdio.h>

int validaNumero(int num);

int main()
{
    int numero, x;

    printf("----- NUMEROS PERFECTOS -----\n");

    do
    {

        printf("Cual es el numero a validar: ");
        scanf("%d", &numero);

        x = validaNumero(numero);

        printf("\n");

        if(x == 1)
        {
            printf("------------------------------\n");
            printf("El numero %d SI es perfecto\n", numero);
            printf("------------------------------\n");
        }
        else
        {
            printf("------------------------------\n");
            printf("El numero %d NO es perfecto\n", numero);
            printf("------------------------------\n");
        }

        printf("\n");

    } while (numero != 0);

    return 0;
}

int validaNumero(int num)
{
        int perfecto, i, x;

        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
                perfecto += i;
        }

        if(perfecto == num)
            x = 1;
        else
            x = 0;

        return(x);

}
