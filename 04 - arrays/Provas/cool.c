#include <stdio.h>

int main()
{
    int arrLength = 0;
    scanf("%d", &arrLength);

    int arrVal = 0;
    int carinhas[arrLength];

    for (int i = 0; i < arrLength; i++)
    {
        scanf("%d", &arrVal);
        carinhas[i] = arrVal;
    }

    int isCool = 1;
    int diff = 0;
    for (int i = 0; i < (arrLength - 1); i++)
    {
        for (int j = 1; j < arrLength; j++)
        {
            diff = carinhas[j] - carinhas[i];
            if ((diff % 2) == 1 || (diff % 2) == -1)
            {
                isCool = 0;
                break;
            }
            printf("diffporcent: %d\n", (diff % 2));
        }
    }

    if (isCool == 1)
    {
        printf("Legal");
    }
    else if (isCool == 0)
    {
        printf("Chato");
    }

    return 0;
}