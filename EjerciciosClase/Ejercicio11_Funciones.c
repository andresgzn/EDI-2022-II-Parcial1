/*
 Las funciones son un pedazo del codigo que realizan un proceso:
 Funcion:
   -Que proceso va a realizar
   -Que necesita para trabajar
   -Que me va a regresar la informacion

 Estructura:
   1. Encabezado - primer linea
      -Tipo de dato, lo que va a regresar
       (si no regresa nada es void)
      -Nombre de la funcion
      -Entre parentesis van los parametros
      -Llaves, cuerpo de la funcion
      -Si la funcion tiene un tipo de retorno diferente de void
       debe de llevar un return
 */

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
