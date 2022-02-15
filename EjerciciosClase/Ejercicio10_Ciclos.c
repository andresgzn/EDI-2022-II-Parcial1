/*
 Generar un numero alteatorio entre 0 y 100
 Lo vamos a mostrar en pantalla y lo vamos a sumar
 vamos a seguir generando hasta que la suma sea mayor a 500
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define LIMITE 100

int main()
{
    int suma=0, numero;

    srand(getpid());

    do
    {
        numero = rand() % (LIMITE + 1);

        printf("%d\n", &numero);

        suma += numero;

        printf("%d\n", suma);

    } while (suma <=500);


    return 0;
}
