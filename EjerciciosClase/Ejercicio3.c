#include <stdio.h>

int main()
{
    int cantidad, billete1000, billete500, billete200, billete100, billete50, billete20;
    int moneda10, moneda5, moneda2, moneda1;

    printf("Cual es la cantidad: ");
    scanf("%d", &cantidad);
    printf("\n");

    billete1000 = cantidad / 1000;
    cantidad = cantidad % 1000;
    printf("Billetes de 1000: %d\n", billete1000);

    billete500 = cantidad / 500;
    cantidad = cantidad % 500;
    printf("Billetes de 500: %d\n", billete500);

    billete200 = cantidad / 200;
    cantidad = cantidad % 200;
    printf("Billetes de 200: %d\n", billete200);

    billete100=cantidad/100;
    cantidad=cantidad%100;
    printf("Billetes de 100: %d\n", billete100);

    billete50=cantidad/50;
    cantidad=cantidad%50;
    printf("Billetes de 50: %d\n", billete50);

    billete20=cantidad/20;
    cantidad=cantidad%20;
    printf("Billetes de 20: %d\n", billete20);

    moneda10=cantidad/10;
    cantidad=cantidad%10;
    printf("Monedas de 10: %d\n", moneda10);

    moneda5=cantidad/5;
    cantidad=cantidad%5;
    printf("Monedas de 5: %d\n", moneda5);

    moneda2=cantidad/2;
    cantidad=cantidad%2;
    printf("Monedas de 2: %d\n", moneda2);

    moneda1=cantidad/1;
    cantidad=cantidad%1;
    printf("Monedas de 1: %d\n", moneda1);


    return 0;
}
