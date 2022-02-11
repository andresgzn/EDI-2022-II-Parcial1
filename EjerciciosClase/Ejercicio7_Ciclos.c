/*
 while - Valida primero la condicion a diferencia de do-while
 */

#include <stdio.h>

int main()
{
    int opcion=10;

    while(opcion >= 0)
    {
        printf("%d\n", opcion);
        opcion--;
    }

    return 0;
}
