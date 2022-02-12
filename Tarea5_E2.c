#include <stdio.h>

int main()
{
    float precio_kilo, kilos, precio_total;

    printf("------- DESCUENTOS -------\n");
    printf("Kilos\t Descuento\n");
    printf("0-2\t 0%\n");
    printf("2.01-5\t 10%\n");
    printf("5.01-10\t 15%\n");
    printf("10.01->\t 20%\n");
    printf("--------------------------\n");

    printf("\n");

    printf("Cual es el precio p/kilo de manzana: ");
    scanf("%f", &precio_kilo);

    printf("Cuantos kilos va a llevar: ");
    scanf("%f", &kilos);

    printf("\n");

    if(kilos > 0 && kilos <= 2)
    {
        precio_total=kilos*precio_kilo;

        printf("---------------------------\n");
        printf("El total a pagar es: $%.2f\n", precio_total);
        printf("---------------------------\n");
    }
    else if(kilos > 2 && kilos <=5)
    {
        precio_total=(precio_kilo*kilos)*.9;

        printf("---------------------------\n");
        printf("El total a pagar es: $%.2f\n", precio_total);
        printf("---------------------------\n");

    }
    else if(kilos > 5 && kilos <=10)
    {
        precio_total=(precio_kilo*kilos)*.85;

        printf("---------------------------\n");
        printf("El total a pagar es: $%.2f\n", precio_total);
        printf("---------------------------\n");
    }
    else
    {
        precio_total=(precio_kilo*kilos)*.80;

        printf("---------------------------\n");
        printf("El total a pagar es: $%.2f\n", precio_total);
        printf("---------------------------\n");
    }


    return 0;
}
