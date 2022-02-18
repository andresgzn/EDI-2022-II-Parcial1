/*
 Funcion que me diga si un numero es primo o no.
 Requerimentos:
   -El valor a checar debera ser solicitado en el main
   -La funcion debe recibir ese numero como parametro
   -La funcion regresara un 0 si no es primo o un 1 si es primo
   -En el main se imprimira "Es primo" o "No es primo"
 */

#include <stdio.h>

int validar(int numero);

int main()
{
    int numero, x;

    printf("Dame un numero: ");
    scanf("%d", &numero);

    x = validar(numero);
    printf("\n");

    if(x == 1)
        printf("El numero %d SI es primo\n", numero);
    else
        printf("El numero %d NO es primo\n", numero);

    return 0;
}

int validar(int num)
{
    int aux = num, x;
    int cont = 0;

    while (aux > 0)
    {
        if(num % aux == 0)
        {
            cont++;
        }
        aux--;
    }

    if(cont == 2)
        x=1;
    else
        x=0;

    return(x);
}
