#include <stdio.h>

/*
 Escribe un programa que pida al usuario días, horas y minutos.
 Calcule la cantidad total de segundos y los imprima.
 */

int main()
{
    int dias, horas, minutos, segundos;

    printf("\n");

    printf("Dias: ");
    scanf("%d", &dias);

    printf("Horas: ");
    scanf("%d", &horas);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("\n");

    segundos=(dias*86400)+(horas*3600)+(minutos*60);

    printf("-------------------------------------------------\n");
    printf("%d Dia(s), %d Horas, %d Minutos son %d segundos\n", dias,horas,minutos,segundos);
    printf("-------------------------------------------------\n");

    return 0;
}
