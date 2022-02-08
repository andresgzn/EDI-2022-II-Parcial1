/*
 Operadores condicionales (Verdadero o falso):
    - <
    - >
    - ==
    - ||
    - !=
    - <=
    - >=

 Instrucciones de Control
    - if(condicion)
           Acciones que SI
      else
           Acciones que NO
 */

#include <stdio.h>

int main()
{
    float promedio;

    printf("Cual es el promedio: ");
    scanf("%f", &promedio);

    if(promedio>=6)
        printf("El alumno esta aprobado");
    else
        printf("El alumno esta reprobado");


    return 0;
}
