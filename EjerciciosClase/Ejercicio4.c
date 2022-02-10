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
        printf("El alumno esta aprobado en ordinario");
    else if(promedio<6 && promedio>=5)
        printf("El alumno esta reprobado y en extraordinario");
    else
        printf("El alumno esta reprobado y en titulacion");


    return 0;
}
