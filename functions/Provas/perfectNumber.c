#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num)
{
    int soma = 0;
    bool boolValue = false;

    for (int i = 1; i < num; i++)
    {
        if ((num % i) == 0)
        {
            soma += i;
        }
    }

    if (soma == num)
    {
        boolValue = true;
    }
    else
    {
        boolValue == false;
    }

    return boolValue;
}

int main()
{
    int indice = 0;
    int perfNum = 0;
    bool perfNumResult = false;

    scanf("%d", &indice);

    for (int i = 0; i < indice; i++)
    {

        scanf("%d", &perfNum);

        perfNumResult = isPerfect(perfNum);

        if (perfNumResult)
        {
            printf("%d eh perfeito\n", perfNum);
        }
        else
        {
            printf("%d nao eh perfeito\n", perfNum);
        }
    }

    return 0;
}