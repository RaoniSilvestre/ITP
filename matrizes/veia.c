#include <stdio.h>

int validade(char jogo[3][3], int x, int y)
{
    
    if (jogo[x][y] == 'X' || jogo[x][y] == 'O')
    {
        return 0; //VALOR INVÁLIDO
    }
    else
        return 1; //VALOR VÁLIDO
}

int ganhouJogo(char jogo[3][3])
{
    int i = 0;
    // VERIFICAR LINHAS E COLUNAS
    for (i = 0; i < 3; i++)
    {
        if (jogo[i][0] == jogo[i][1] && jogo[i][1] == jogo[i][2] && (jogo[i][0] == 'X' || jogo[i][0] == 'O'))
        {
            return 1; // VENCEDOR NA LINHA
        }
        if (jogo[0][i] == jogo[1][i] && jogo[1][i] == jogo[2][i] && (jogo[0][i] == 'X' || jogo[0][i] == 'O'))
        {
            return 1; // VENCEDOR NA COLUNA
        }
    }

    // Verificar diagonais
    if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && (jogo[0][0] == 'X' || jogo[0][0] == 'O'))
    {
        return 1; // VENCEDOR NA DIAGONAL PRINCIPAL
    }
    if (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && (jogo[0][2] == 'X' || jogo[0][2] == 'O'))
    {
        return 1; // VENCEDOR NA DIAGONAL SECUNDÁRIA
    }

    return 0; // NINGUÉM VENCEU
}

int main()
{
    char jogo[3][3];
    int jogadas = 0, eval = 0, x, y, ganhou;
    char input;

    // RECEBENDO TODO O JOGO DA VELHA 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %c", &jogo[i][j]);
        }
    }

    scanf("%d", &jogadas);

    for (int i = 0; i < jogadas; i++)
    {
        // INPUT DE NOVA JOGADA
        eval = 0;
        scanf("%d %d %c", &x, &y, &input);

        // VALIDANDO JOGADA
        eval = validade(jogo, x - 1, y - 1);

        // INSERINDO NOVO INPUT
        if (eval == 1)
        {
            jogo[x-1][y-1] = input;

            ganhou = ganhouJogo(jogo);
            if(ganhou) printf("Boa jogada, vai vencer!\n");
            else printf("Continua o jogo.\n");

            // DESTROCANDO VALOR PARA MATRIZ INICIAL
            jogo[x-1][y-1] = '.';
        } else printf("Jogada inválida!\n");
    }

    return 0;
}
