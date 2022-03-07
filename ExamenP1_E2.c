#include <stdio.h>
#define TAM 100

void conversion(char cadena[TAM]);

int main()
{
    char cad[TAM];

    printf("Cadena: ");
    scanf("%[^\n]", cad);

    conversion(cad);

    printf("\n");

    printf("Conversion: %s", cad);

    return 0;
}

void conversion(char cadena[TAM])
{
    for (int i = 0; i < TAM; ++i)
    {
        switch (cadena[i])
        {
            case 'a':
                cadena[i]='A';
                break;
            case 'e':
                cadena[i]='E';
                break;
            case 'i':
                cadena[i]='I';
                break;
            case 'o':
                cadena[i]='O';
                break;
            case 'u':
                cadena[i]='U';
                break;
            case 'A':
                cadena[i]='a';
                break;
            case 'E':
                cadena[i]='e';
                break;
            case 'I':
                cadena[i]='i';
                break;
            case 'O':
                cadena[i]='o';
                break;
            case 'U':
                cadena[i]='u';
                break;
        }
    }
}
