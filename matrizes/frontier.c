#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    char mapa[x][y];
    float water = 0, desert = 0, veggie = 0, hostile = 0, nil = 0, xy;
    xy = x * y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf(" %c", &mapa[i][j]);
            if (mapa[i][j] == '~')
                water++;

            else if (mapa[i][j] == '^')
                desert++;

            else if (mapa[i][j] == '*')
                veggie++;

            else if (mapa[i][j] == '.')
                nil++;
            else if (mapa[i][j] == 'X')
                hostile++;
        }
    }

    if (hostile!=0) 
        printf("Planeta Hostil");
    else if (water >= xy*0.85)
        printf("Planeta Aquático");
    else if (desert >= xy*0.6)
        printf("Planeta Desértico");
    else if (veggie >= xy*0.65)
        printf("Planeta Selvagem");
    else if (water >= xy*0.5 && veggie >=0.2*xy)
        printf("Planeta Classe M");
    else printf("Planeta Inóspito");

    return 0;
}
