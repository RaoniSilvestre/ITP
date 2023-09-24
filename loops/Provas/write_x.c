#include <stdio.h>

int main()
{

    int valorPrintado;
    char letraEscrita;
    scanf("%d %c", &valorPrintado, &letraEscrita);

        for (int i = 1; i < valorPrintado; i++)
    {
        for (int j = 1; j < valorPrintado + 1; j++)
        {
            if ((i == j) || ((i + j == valorPrintado)))
            {
                printf("%c", letraEscrita);
            }
            else
            {
                printf(" "); // valorPrintado
            }
        }
        printf("\n"); // colunas
    }
}