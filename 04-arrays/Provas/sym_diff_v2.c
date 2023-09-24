#include <stdio.h>

int main () {
    int firstIndex = 0, secondIndex = 0,superIndex = 0, crescentAux = 0;
    scanf("%d %d", &firstIndex, &secondIndex);
    int aux;
    int firstArray[firstIndex], secondArray[secondIndex], superArray[firstIndex+secondIndex];

    for (int i = 0; i < firstIndex; i++)
    {
        scanf("%d",&firstArray[i]);
    }

    for (int i = 0; i < secondIndex; i++)
    {
        scanf("%d",&secondArray[i]);
    }

    for (int i = 0; i < firstIndex; i++)
    {
        int local = 1;
        for (int j = 0; j < secondIndex; j++)
        {
            if (firstArray[i] == secondArray[j])
            {
                local = 0;
                break;
            }
        }
        if (local) {
            superArray[superIndex] = firstArray[i];
            superIndex++;
        }
    }
    for (int i = 0; i < secondIndex; i++)
    {
        int local = 1;
        for (int j = 0; j < firstIndex; j++)
        {
            if (secondArray[i] == firstArray[j])
            {
                local = 0;
                break;
            }
            
        }
        if (local)
        {
            superArray[superIndex] = secondArray[i];
            superIndex++;
        }
    }

    for (int i = 1; i <= superIndex; i++)
    {
        for (int j = 1; j < superIndex; j++)
        {
            if (superArray[j-1]>superArray[j])
            {
                crescentAux = superArray[j];
                superArray[j] = superArray[j-1];
                superArray[j-1] = crescentAux;
            }
            
        }
        
    }
    

    for (int i = 0; i < superIndex; i++)
    {
        printf("%d ", superArray[i]);
    }

    return 0;
}