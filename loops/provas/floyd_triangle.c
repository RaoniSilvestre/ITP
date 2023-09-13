#include <stdio.h>

int main()
{
    int inputTriangle = 0;
    int contI = 1;
    int contJ = 1;
    int contG = 1;
    scanf("%d", &inputTriangle);
    if (inputTriangle <= 0)
    {
        printf("Você entrou com %d, tente de novo na próxima", inputTriangle);
    }
    else
    {
        for (int j = 0; j < inputTriangle; j++)
        {

            for (int i = 0; i < contI; i++)
            {
                if (contG < 10)
                {
                    printf(" %d ", contG++);
                }
                else
                {
                    printf("%d ", contG++);
                }
            }
            contI++;
            printf("\n");
        }
    }
}