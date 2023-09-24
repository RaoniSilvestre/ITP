#include <stdio.h>
int main()
{
    float inputNadador = 1;
    float largada = 0;

    int cont = 1;
    int qntNadAptos = 0;
    int qntRaias = 0;
    
    while (inputNadador != -1)
    {
        scanf("%f", &inputNadador);
        if (cont == 1)
        {
            cont = 2;
            largada = inputNadador;
        }
        else if (cont == 2)
        {
            if (largada >= inputNadador)
            {
                qntNadAptos += 1;
            }
        }
    }
    qntNadAptos = qntNadAptos - 1;
    if(qntNadAptos%8 == 0) {
        qntRaias = qntNadAptos/8;
    } else {
        qntRaias = (qntNadAptos/8)+1;
    }
    printf("%d %d", qntNadAptos, qntRaias);
}