#include <stdio.h>

int main()
{
    int hora, minutos;

    printf("---Proporcione la hora actual---\n");

    printf(" Hora: ");
    scanf("%d", &hora);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("\n");

    if(hora >=0 && minutos >= 0 && hora <= 11 && minutos <= 59)
    {
        printf("-----------\n");
        printf("Buenos dias\n");
        printf("-----------\n");
    }
    else if(hora >=12 && minutos >= 0 && hora <= 17 && minutos <= 59)
    {
        printf("-------------\n");
        printf("Buenas tardes\n");
        printf("-------------\n");
    }
    else if(hora >=18 && minutos >= 0 && hora <= 23 && minutos <= 59)
    {
        printf("-------------\n");
        printf("Buenas noches\n");
        printf("-------------\n");
    }
    else
    {
        printf("--------------\n");
        printf("Hora no valida\n");
        printf("--------------\n");
    }


    return 0;
}
