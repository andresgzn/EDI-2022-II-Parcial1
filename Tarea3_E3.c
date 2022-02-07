#include <stdio.h>

/*
 Escribe un programa que pida al usuario la cantidad de segundos
 e imprima el número de días, horas, minutos y segundos
 */

int main()
{
    int dias, horas, minutos, segundos;

    printf("La cantidad total de segundos es: ");
    scanf("%d", &segundos);

    printf("\n");

    dias=segundos/60/60/24;
    segundos-=(dias*86400);

    horas=segundos/60/60;
    segundos-=(horas*3600);

    minutos=segundos/60;
    segundos-=(minutos*60);

    printf("\n");

    printf("-----------------\n");
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    printf("-----------------\n");


    return 0;
}
