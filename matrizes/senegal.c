#include <stdio.h>

int calcularAposta(int altura,int largura,  int bandeira[altura][largura], char cor) {
    int output = 0;

    if (cor == 'G')
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                if (j < (largura / 3))
                {
                    output += bandeira[i][j];
                }
            }
        }
    }
    else if (cor == 'Y')
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                if (j < (2 * (largura / 3)) && j >= (largura / 3))
                {
                    output += bandeira[i][j];
                }
            }
        }
    }
    else if (cor == 'R')
    {
        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                if (j >= (2 * (largura / 3)))
                {
                    output += bandeira[i][j];
                }
            }
        }
    }

    return output;
}


int main()
{
    int l, num;
    char cor;
    scanf("%d %d %c", &l, &num, &cor);
    int a = ((l / 3) * 2);
    int matriz[a][l];
    int output = 10;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < l; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (j < (l / 3))
            {
                matriz[i][j] = num + 1;
            }
            else if (j < (2 * (l / 3)))
            {
                matriz[i][j] = num + 2;
            }
            else
            {
                matriz[i][j] = num + 3;
            }
        }
    }

    output = calcularAposta(a, l, matriz, cor);

    // output
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n%d\n", output);
    return 0;
}

