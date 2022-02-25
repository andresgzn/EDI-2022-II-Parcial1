/*
 Arreglos Paralelos
 -Arreglos simples o multidimensionales
 -Almacenan informacin de diferente tipo, sobre un mismo asunto
 Ejemplo:
    -Alumnos
    -Clave
    -Nombre
    -Calificacion

  -Funcion que lea la clave de los alumnos
  -Funcion que lea las calificaciones de los alumnos
  -Funcion que obtenga el promedio de cada alumno ( 3 parciales )
  -Funcion que obtenga el promedio de todos os alumnos de un parcial
 */

#include <stdio.h>

#define NUMERO_ALUMNOS 5

void claves(int c[NUMERO_ALUMNOS]);
void calificaciones(float p1[NUMERO_ALUMNOS], float p2[NUMERO_ALUMNOS], float p3[NUMERO_ALUMNOS], int c[NUMERO_ALUMNOS]);

int main()
{
    int clave[NUMERO_ALUMNOS];
    float parcial1[NUMERO_ALUMNOS];
    float parcial2[NUMERO_ALUMNOS];
    float parcial3[NUMERO_ALUMNOS];

    claves(clave);
    printf("\n");

    calificaciones(parcial1, parcial2, parcial3, clave);
    printf("\n");

    return 0;
}

void claves(int c[NUMERO_ALUMNOS])
{
    for (int i = 0; i < NUMERO_ALUMNOS; ++i)
    {
        printf("Clave del alumno No. %d: ", i+1);
        scanf("%d", &c[i]);
    }
}

void calificaciones(float p1[NUMERO_ALUMNOS], float p2[NUMERO_ALUMNOS], float p3[NUMERO_ALUMNOS], int c[NUMERO_ALUMNOS])
{
    for (int i = 0; i < NUMERO_ALUMNOS; ++i)
    {
        printf("Calificaion del alumno con clave %d: \n", c[i]);

        printf("Parcial 1: ");
        scanf("%f", &p1[i]);

        printf("Parcial 2: ");
        scanf("%f", &p2[i]);

        printf("Parcial 3: ");
        scanf("%f", &p3[i]);
    }
}
