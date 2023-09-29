#include <stdio.h>

int main()
{

    int tam = 0;
    scanf("%d", &tam);
    int diagPRIN = 0, diagSEC = 0, sumDiags = 0;

    int matriz[tam][tam];

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (i == j)
            {
                diagPRIN = diagPRIN + matriz[i][j];
            }

            if ((i + j) == (tam -1))
            {
                diagSEC = diagSEC+ matriz[i][j];
            }
        }
    }

    sumDiags = diagPRIN + diagSEC;
 
    printf("soma: %d\ndiagprin: %d\ndiagSec: %d", sumDiags,diagPRIN,diagSEC);

    return 0;
}