#include <stdio.h>

int main()
{
    int tam;
    scanf("%d", &tam);
    int matriz[tam][tam];

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = 0;
        }
    }

    for (int k = 0; k < tam; k++)
    {
        for (int i = 0; i < tam; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                if (j == k || j == tam - (k + 1) || i == k || i == tam - (k + 1))
                {
                    if (matriz[i][j]==0)
                    {
                    matriz[i][j] = k + 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}