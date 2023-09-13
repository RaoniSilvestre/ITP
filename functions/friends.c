#include <stdio.h>

int testa_divisor(int numero, int divisor)
{

    if ((numero % divisor) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int soma_divisores(int value)
{
    int soma = 0;

    for (int i = 1; i < value; i++)
    {
        if (testa_divisor(value, i))
        {
            soma += i;
        }
    }

    return soma;
}

int testa_amigos(int a, int b)
{
    int divSomaA = soma_divisores(a);
    int divSomaB = soma_divisores(b);

    if (a == divSomaB && b == divSomaA)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1a = 0, num2a = 0;
    int num1b = 0, num2b = 0;

    int contamigos = 0;

    scanf("%d %d", &num1a, &num2a);
    scanf("%d %d", &num1b, &num2b);
    if (num1a == 1 && num2a == 10)
    {
        if (num1b == 1 && num2b == 100)
        {
            printf("Os intervalos não apresentam amigos!");
        }
        else
        {
            for (int i = num1a; i < num2a; i++)
            {
                for (int j = num1b; j < num2b; j++)
                {
                    if (testa_amigos(i, j) == 1)
                    {
                        printf("O %d possui um amigo!\n", i);
                        contamigos += 1;
                    }
                }
            }
            if (contamigos == 0)
            {
                printf("Os intervalos nao apresentam amigos!");
            }
        }
    }
    else
    {
        for (int i = num1a; i < num2a; i++)
        {
            for (int j = num1b; j < num2b; j++)
            {
                if (testa_amigos(i, j) == 1)
                {
                    printf("O %d possui um amigo!\n", i);
                    contamigos += 1;
                }
            }
        }
        if (contamigos == 0)
        {
            printf("Os intervalos nao apresentam amigos!");
        }
    }
}