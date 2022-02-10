/*
 El usuario nos debe dar un numero del 1 al 12 y debemos imprimir a
 que mes corresponde. Si el numero es menor que 1 o mayor a 12 debemos
 decirle que no es un numero valido.

 NOTA: cuando varios casos dan o imprimen un mismo resultado se pueden
       poner sobre la misma linea, Ej.

       switch(numero)
       {

          case 1:
          case 12:
          case 3:
              printf("Hola");
              break;

        }
 */

#include <stdio.h>

int main()
{
    int numero;

    printf("Dame un numero entre 1-12: ");
    scanf("%d", &numero);

    printf("\n");

    switch (numero)
    {
        case 1:
            printf("Enero es el mes No. %d\n", numero);
            break;
        case 2:
            printf("Febrero es el mes No. %d\n", numero);
            break;
        case 3:
            printf("Marzo es el mes No. %d\n", numero);
            break;
        case 4:
            printf("Abril es el mes No. %d\n", numero);
            break;
        case 5:
            printf("Mayo es el mes No. %d\n", numero);
            break;
        case 6:
            printf("Junio es el mes No. %d\n", numero);
            break;
        case 7:
            printf("Julio es el mes No. %d\n", numero);
            break;
        case 8:
            printf("Agosto es el mes No. %d\n", numero);
            break;
        case 9:
            printf("Septiembre es el mes No. %d\n", numero);
            break;
        case 10:
            printf("Octubre es el mes No. %d\n", numero);
            break;
        case 11:
            printf("Noviembre es el mes No. %d\n", numero);
            break;
        case 12:
            printf("Diciembre es el mes No. %d\n", numero);
            break;
        default:
            printf("No es un numero valido\n");

    }
    return 0;
}
