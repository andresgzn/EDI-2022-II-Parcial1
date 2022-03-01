#include <stdio.h>
#define TAM 100

void pideOracion(char oracion[TAM]);
void pideCaracter(char *c);
int calculaCaracter(char oracion[TAM], char caracter);

int main()
{
    int x;
    char oracion[TAM];
    char c;

    printf("------- CADENAS -------\n");

    pideOracion(oracion);
    pideCaracter(&c);

    printf("\n");

    x = calculaCaracter(oracion, c);


    printf("----------------------------------------------\n");
    printf("La letra '%c' aparece %d veces en la cadena\n", c, x);
    printf("----------------------------------------------\n");

    return 0;
}

void pideOracion(char oracion[TAM])
{
    printf(" Cadena: ");
    scanf("%[^\n]", oracion);

    fflush(stdin);
}

void pideCaracter(char *c)
{
    printf("Caracter: ");
    scanf("%c", &*c);
}

int calculaCaracter(char oracion[TAM], char caracter)
{
    int contador=0;

    for (int i = 0; i < TAM; ++i)
    {
        if(oracion[i] == caracter)
        {
            contador += 1;
        }
    }

    return (contador);
}