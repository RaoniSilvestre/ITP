#include <stdio.h>

int main()
{

    int val, cont = 0;
    scanf("%d", &val);
    int array[val];
    int dupes[val];
    for (int i = 0; i < val; i++)
    {
        dupes[i] = -1;
    }

    for (int i = 0; i < val; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < val; i++)
    {
        for (int j = 0; j < val; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                dupes[cont] = array[i];
                cont++;
            }
        }
    }
    for (int i = 0; i < cont / 2; i++)
    {
        printf("%d ", dupes[i]);
    }

    return 0;
}