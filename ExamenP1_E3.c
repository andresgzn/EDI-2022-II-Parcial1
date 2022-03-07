#include <stdio.h>
#define N 3
#define M 4

void leeMatriz(int arreglo[N][M]);
void sumaMatriz(int arreglo[N][M], int suma[N][M]);
void imprime(int matriz[N][M]);

int main()
{
    int arr[N][M];
    int suma[N][M];

    leeMatriz(arr);
    sumaMatriz(arr, suma);

    printf("\n");
    imprime(arr);

    printf("\n");
    imprime(suma);

    return 0;
}

void leeMatriz(int arreglo[N][M])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("Dato [%d][%d]:", i, j);
            scanf("%d", &arreglo[i][j]);
        }
    }
}

void sumaMatriz(int arreglo[N][M], int suma[N][M])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            suma[i][j] = arreglo[i][j]+arreglo[i+1][j]+arreglo[i][j+1]+arreglo[i-1][j]+arreglo[i][j-1];
        }
    }
}

void imprime(int matriz[N][M])
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
