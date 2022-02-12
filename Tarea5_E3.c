#include <stdio.h>

int main()
{
    float lado_a, lado_b, lado_c;

    printf("Cual es la medida del primer lado: ");
    scanf("%f", &lado_a);

    printf("Cual es la medida del segundo lado: ");
    scanf("%f", &lado_b);

    printf("Cual es la medida del tercer lado: ");
    scanf("%f", &lado_c);

    printf("\n");

    if(lado_a == lado_b && lado_b == lado_c)
    {
        printf("--------------------------------\n");
        printf("Este es un triangulo EQUILATERO\n");
        printf("\t (3 lados iguales)\n");
        printf("--------------------------------\n");
    }
    else if(lado_a == lado_b || lado_a == lado_c || lado_b == lado_c)
    {
        printf("-------------------------------\n");
        printf("Este es un triangulo ISOSCELES\n");
        printf("\t (2 lados iguales)\n");
        printf("-------------------------------\n");
    }
    else
    {
        printf("------------------------------\n");
        printf("Este es un triangulo ESCALENO\n");
        printf("\t (0 lados iguales)\n");
        printf("------------------------------\n");
    }

    return 0;
}
