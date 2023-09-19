#include <stdio.h>

int main()
{
    int qntEstudantes = 0;
    scanf("%d", &qntEstudantes);

    int numChamada[qntEstudantes];
    float mediaParcial[qntEstudantes];

    int contApr = 0, contRec = 0, contRep = 0;
    float aprovados[qntEstudantes], recuperacao[qntEstudantes], reprovados[qntEstudantes];
    int numChamadaApr[qntEstudantes], numChamadaRec[qntEstudantes], numChamadaRep[qntEstudantes];
    for (int i = 0; i < qntEstudantes; i++)
    {
        numChamadaApr[i] = 0;
        numChamadaRec[i] = 0;
        numChamadaRep[i] = 0;
    }
    

    for (int i = 0; i < qntEstudantes; i++)
    {
        scanf("%d - %f", &numChamada[i], &mediaParcial[i]);
    }

    for (int i = 0; i < qntEstudantes; i++)
    {
        if (mediaParcial[i] >= 7)
        {
            aprovados[contApr] = mediaParcial[i];
            numChamadaApr[contApr] = numChamada[i];
            contApr++;
        }
        else if (mediaParcial[i] < 7 && mediaParcial[i] >= 5)
        {
            recuperacao[contRec] = mediaParcial[i];
            numChamadaRec[contRec] = numChamada[i];
            contRec++;
        }
        else if (mediaParcial[i] < 5)
        {
            reprovados[contRep] = mediaParcial[i];
            numChamadaRep[contRep] = numChamada[i];
            contRep++;
        }
    }
    printf("Aprovados:");
    for (int i = 0; i < qntEstudantes; i++)
    {
        if (numChamadaApr[i] == 0)
        {
            break;
        }
        if (i == 0)
        {
            printf(" %d (%.1f)",numChamadaApr[i],aprovados[i]);    
        } else{
            printf(", %d (%.1f)",numChamadaApr[i],aprovados[i]);
        }
    }
    
    printf("\nRecuperação:");
    for (int i = 0; i < qntEstudantes; i++)
    {
        if (numChamadaRec[i] == 0)
        {
            break;
        }
        if (i == 0)
        {
            printf(" %d (%.1f)",numChamadaRec[i],recuperacao[i]);    
        } else{
            printf(", %d (%.1f)",numChamadaRec[i],recuperacao[i]);
        }
    }

    printf("\nReprovados:");
    for (int i = 0; i < qntEstudantes; i++)
    {
        if (numChamadaRep[i] == 0)
        {
            break;
        }
        if (i == 0)
        {
            printf(" %d (%.1f)",numChamadaRep[i],reprovados[i]);    
        } else{
            printf(", %d (%.1f)",numChamadaRep[i],reprovados[i]);
        }
    }
    return 0;
}