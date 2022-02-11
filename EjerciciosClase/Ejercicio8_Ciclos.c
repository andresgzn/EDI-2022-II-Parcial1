/*
 for - lleva 3 intervalos
        for (Inicializacion; condicion; incremento/decremento)
 */

#include <stdio.h>

int main()
{
    int vuelta, vueltasTotales;

    printf("Numero de vueltas: ");
    scanf("%d", &vueltasTotales);

    for(vuelta=1; vuelta <= vueltasTotales; vuelta++)
    {
        printf("%d\n", vuelta);
    }
    return 0;
}
