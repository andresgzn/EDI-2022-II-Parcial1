#include <stdio.h>

int main()
{
    // Pedirle al usuario las calificaciones de los 3 parciales
    // Calcular el promedio y mostrarlo con 2 decimales

    // 1. Pensar con que datos voy a trabajar
    //    a. Los tengo yo
    //    b. Lo necesito del usuario

    // 2. Que hago con la informacion

    // 3. Salida de datos

    float calif1, calif2, calif3, promedio;

    printf("La calificacion del primer parcial es: ");
    scanf("%f", &calif1);

    printf("La calificacion del segundo parcial es: ");
    scanf("%f", &calif2);

    printf("La calificacion del tercer parcial es: ");
    scanf("%f", &calif3);

    printf("\n");

    promedio=(calif1+calif2+calif3)/3;

    printf("El promedio final es: %.2f\n", promedio);

    return 0;
}
