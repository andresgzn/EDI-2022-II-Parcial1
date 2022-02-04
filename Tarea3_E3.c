#include <stdio.h>

/*
 Escribe un programa que pida al usuario la cantidad de segundos
 e imprima el número de días, horas, minutos y segundos
 */

int main()
{
    int dias, horas, minutos, segundos, total_segundos;

    printf("La cantidad total de segundos es: ");
    scanf("%d", &total_segundos);

    printf("\n");

    dias=total_segundos/60/60/24;
    total_segundos=total_segundos-(dias*86400);

    horas=total_segundos/60/60;
    total_segundos=total_segundos-(horas*3600);

    minutos=total_segundos/60;
    total_segundos=total_segundos-(minutos*60);

    segundos=total_segundos;

    printf("\n");

    printf("-----------------\n");
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    printf("-----------------\n");


    return 0;
}
