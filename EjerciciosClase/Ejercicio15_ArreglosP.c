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

#define NUMERO_ALUMNOS 2

void claves(int c[NUMERO_ALUMNOS]);
void calificaciones(float p1[NUMERO_ALUMNOS], float p2[NUMERO_ALUMNOS], float p3[NUMERO_ALUMNOS], int c[NUMERO_ALUMNOS]);
void promedioAlumnos(float p1[NUMERO_ALUMNOS], float p2[NUMERO_ALUMNOS], float p3[NUMERO_ALUMNOS], int c[NUMERO_ALUMNOS], float promedio1[NUMERO_ALUMNOS]);
void leeNombres(char nombres[NUMERO_ALUMNOS][50]);

int main()
{
    int clave[NUMERO_ALUMNOS];
    float parcial1[NUMERO_ALUMNOS];
    float parcial2[NUMERO_ALUMNOS];
    float parcial3[NUMERO_ALUMNOS];
    float promedio1[NUMERO_ALUMNOS];

    char nombres[NUMERO_ALUMNOS][50];

    leeNombres(nombres);
    printf("\n");

    claves(clave);
    printf("\n");

    calificaciones(parcial1, parcial2, parcial3, clave);
    printf("\n");

    promedioAlumnos(parcial1, parcial2, parcial3, clave, promedio1);
    printf("\n");



    return 0;
}

void leeNombres(char nombres[NUMERO_ALUMNOS][50])
{
    for (int i = 0; i < NUMERO_ALUMNOS; ++i)
    {
        printf("Dame el nombre del alumno %d: ", i+1);
        scanf("%s", nombres[i]);

        //printf("%s\n",nombres[i]);
    }
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

        printf("\n");
    }
}

void promedioAlumnos(float p1[NUMERO_ALUMNOS], float p2[NUMERO_ALUMNOS], float p3[NUMERO_ALUMNOS], int c[NUMERO_ALUMNOS], float promedio1[NUMERO_ALUMNOS])
{
    for (int i = 0; i < NUMERO_ALUMNOS; ++i)
    {
        promedio1[i] = (p1[i] + p2[i] + p3[i]) / 3;
        printf("El alumno %d tiene: %.2f\n", c[i], promedio1[i]);
    }
}