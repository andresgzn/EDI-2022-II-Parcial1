#include <stdio.h>
#define TAM 4

void pideDatos(int claveProductos[TAM], float precioProductos[TAM], int stockProductos[TAM]);
int claveMayorPrecio(int claveProductos[TAM], float precioProductos[TAM]);
int claveMenorStock(int claveProductos[TAM], int stockProductos[TAM]);
float ventaTotal(int stockProductos[TAM], float precioProductos[TAM]);


int main()
{
    int cProductos[TAM];
    float pProductos[TAM];
    int sProductos[TAM];

    int mayor, menor;
    float venta;

    printf("---------- PRODUCTOS ----------\n");
    printf("\n");

    pideDatos(cProductos, pProductos, sProductos);
    mayor = claveMayorPrecio(cProductos, pProductos);
    menor = claveMenorStock(cProductos, sProductos);
    venta = ventaTotal(sProductos, pProductos);

    printf("-----------------------------------\n");
    printf("Producto con mayor precio: %d\n", mayor);
    printf("Producto con menos stock: %d\n", menor);
    printf("Total de venta esperada: %.2f\n", venta);
    printf("-----------------------------------\n");

    return 0;
}

void pideDatos(int claveProductos[TAM], float precioProductos[TAM], int stockProductos[TAM])
{
    for (int i = 0; i < TAM; ++i)
    {
        printf("Clave producto No. %d:", i+1);
        scanf(" %d", &claveProductos[i]);

        printf("Precio producto No. %d:", i+1);
        scanf("%f", &precioProductos[i]);

        printf("Stock del producto No. %d:", i+1);
        scanf("%d", &stockProductos[i]);

        printf("\n");

    }
}

int claveMayorPrecio(int claveProductos[TAM], float precioProductos[TAM])
{
    float mayor = precioProductos[0];
    int clave;

    for (int i = 1; i < TAM; ++i)
    {
        if(precioProductos[i] > mayor)
        {
            mayor = precioProductos[i];
            clave = claveProductos[i];
        }
    }

    return (clave);
}

int claveMenorStock(int claveProductos[TAM], int stockProductos[TAM])
{
    int menor = stockProductos[0];
    int clave;

    for (int i = 1; i < TAM; ++i)
    {
        if(stockProductos[i] < menor)
        {
            menor = stockProductos[i];
            clave = claveProductos[i];
        }
    }

    return (clave);

}

float ventaTotal(int stockProductos[TAM], float precioProductos[TAM])
{
    float venta = 0;

    for (int i = 0; i < TAM; ++i)
    {
        venta += precioProductos[i] * stockProductos[i];
    }

    return (venta);

}


