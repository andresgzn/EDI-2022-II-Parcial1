#include <stdio.h>
#define N 4
#define M 3

void capturaDatos(int arr1[N][M], int arr2[N][M]);
void sumaMatrices(int arr1[N][M], int arr2[N][M], int suma[N][M]);
void promedioRenglones(int suma[N][M], float promedioRen[N]);
void promedioColumnas(int suma[N][M], float promedioCol[N]);

int main()
{
    int arreglo1[N][M], arreglo2[N][M], suma[N][M];
    float promedioRen[N], promedioCol[M];

    printf("---------- ARREGLOS BIDIMENSIONALES ----------\n");
    printf("\n");

    capturaDatos(arreglo1, arreglo2);
    sumaMatrices(arreglo1, arreglo2, suma);
    promedioRenglones(suma, promedioRen);
    promedioColumnas(suma, promedioCol);

    printf("\n");
    printf("-------- MATRIZ CAPTURADA --------\n");

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("%d\t", arreglo1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("----------------------------------\n");
    printf("\n");
    printf("-------- SUMA DE MATRICES --------\n");

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("%d\t", suma[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("----------------------------------\n");
    printf("\n");
    printf("-------- PROMEDIO POR RENGLONES --------\n");

    for (int i = 0; i < N; ++i)
    {
        printf("%.0f\t", promedioRen[i]);
    }

    printf("\n");
    printf("----------------------------------------\n");
    printf("\n");
    printf("-------- PROMEDIO POR COLUMNAS --------\n");

    for (int i = 0; i < M; ++i)
    {
        printf("%.0f\t", promedioCol[i]);
    }

    printf("\n");
    printf("---------------------------------------\n");

    return 0;
}

void capturaDatos(int arr1[N][M], int arr2[N][M])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("Dato [%d][%d]:", i, j);
            scanf("%d", &arr1[i][j]);

            arr2[i][j] = arr1[i][j];
        }
    }


}

void sumaMatrices(int arr1[N][M], int arr2[N][M], int suma[N][M])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            suma[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void promedioRenglones(int suma[N][M], float promedioRen[N])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            promedioRen[i] += suma[i][j];
        }
        promedioRen[i] /= M;
    }
}

void promedioColumnas(int suma[N][M], float promedioCol[M])
{
    for (int j = 0; j < M; ++j)
    {
        for (int i = 0; i < N; ++i)
        {
            promedioCol[j] += suma[i][j];
        }
        promedioCol[j] /= N;
    }
}
