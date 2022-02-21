/*
 Punto medio (x, y) de un segmento de recta
 Pedir al usuario (x1, y1) y (x2, y2)

 - Una funcion para pedir los puntos (x, y)
 - Funcion que calcule y regrese el punto medio
 - El main debe de imprimir el punto medio
 */

#include <stdio.h>

void pidePuntos(int *x, int *y);
void puntoMedio(int x1, int y1, int x2, int y2, int *xm, int *ym);

int main()
{
   int x1, y1, x2, y2;
   int xm, ym;

   printf("-- COORDENADAS --\n");
   printf(" Primer punto: \n");

   pidePuntos(&x1, &y1);
   printf("\n");

   printf("Segundo punto: \n");
   printf("\n");

   pidePuntos(&x2, &y2);
   puntoMedio(x1, y1, x2, y2, &xm, &ym);

   printf("El punto medio de la resta es (%d, %d)\n", xm, ym);

   return 0;
}

void pidePuntos(int *x, int *y)
{
    printf(" x: ");
    scanf("%d", &*x);

    printf("y: ");
    scanf("%d", &*y);
}

void puntoMedio(int x1, int y1, int x2, int y2, int *xm, int *ym)
{
    *xm = (x1 + x2)/2;
    *ym = (y1 + y2)/2;
}