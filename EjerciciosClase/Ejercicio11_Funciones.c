#include <stdio.h>

void imprime_pares(int inferior, int superior);

int main()
{
    int superior, inferior, numero;

    printf("Dame el limite inferior: ");
    scanf("%d", &inferior);

    printf("Dam el limite superior: ");
    scanf("%d", &superior);

    imprime_pares(inferior, superior);

    return 0;
}

void imprime_pares(int inferior, int superior)
{
    int numero;

    numero=inferior;

    while(numero >= inferior && numero <= superior)
    {
        if (numero % 2 == 0)
            printf("%d, ", numero);

        numero++;
    }

}
