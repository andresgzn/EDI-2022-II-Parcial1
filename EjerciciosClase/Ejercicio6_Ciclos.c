/*
 Ciclos:
   do - while
 */

#include <stdio.h>

int main()
{
    int opcion;
    int numeroMes;

    do {
        //Cosas a realizar

        printf("Dame un numero del 1 al 12: ");
        scanf("%d", &numeroMes);

        if(numeroMes >= 3 && numeroMes <= 5)
            printf("Primavera\n");
        else if(numeroMes >= 6 && numeroMes <=8)
            printf("Verano\n");
        else if(numeroMes >=9 && numeroMes <=11)
            printf("Otoño\n");
        else if(numeroMes == 12 || numeroMes >=1 && numeroMes <=2)
            printf("Invierno\n");
        else
            printf("El valor no es valido\n");

        printf("Deseas continuar (1.- SI o 2.- NO): ");
        scanf("%d", &opcion);

        printf("\n");

    } while (opcion == 1); //condiciones

    return 0;
}
