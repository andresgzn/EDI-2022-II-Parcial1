#include <stdio.h>

 /*
 Escriba un programa que pida el precio de un producto (puede tener decimales) y el porcentaje de descuento.
 Calcule el precio del producto con el descuento y lo imprima con 2 decimales.
 */

int main()
{
    float precio, total, descuento;

    printf("Precio del producto: ");
    scanf("%f", &precio);
    
    printf("Descuento: ");
    scanf("%f", &descuento);

    printf("\n");

    descuento=(descuento*precio)/100;
    total=precio-descuento;

    printf("-------------------------\n");
    printf("Precio sin descuento: %.2f\n", precio);
    printf("Precio con descuento: %.2f\n", total);
    printf("-------------------------\n");


    return 0;
}
