#include <stdio.h>

int main(void)
{
    int entradaDinheiro, troco, valorCombo;
    scanf("%d%d", &valorCombo, &entradaDinheiro);
    
    if (valorCombo == 1)
        valorCombo = 12;
    else if (valorCombo == 2)
        valorCombo = 23;
    else if (valorCombo == 3)
        valorCombo = 31;
    else if (valorCombo == 4)
        valorCombo = 28;
    else if (valorCombo == 5)
        valorCombo = 15;
    
    if (valorCombo == entradaDinheiro)
    {
        printf("Deu certim!");
    }
    else if (valorCombo > entradaDinheiro)
    {
        troco = valorCombo - entradaDinheiro;
        printf("Saldo insuficiente! Falta %d reais", troco);
    }
    else if (valorCombo < entradaDinheiro)
    {
        troco = entradaDinheiro - valorCombo;
        printf("Troco = %d reais", troco);
    }

    return 0;
}
