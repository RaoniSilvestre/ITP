#include <stdio.h>

int main()
{
    int qntClubes = 0;
    char esporteAtleta = 'A';
    int salto = 0;
    int corrida = 0;
    int lancamento = 0;
    int sumAtletas = 0;
    scanf("%d", &qntClubes);
    for (int i = 0; i < qntClubes; i++)
    {
        while (esporteAtleta != 'F')
        {
            scanf("%c", &esporteAtleta);
            if (esporteAtleta == 'S')
            {
                salto += 1;
            }
            else if (esporteAtleta == 'C')
            {
                corrida += 1;
            }
            else if (esporteAtleta == 'L')
            {
                lancamento += 1;
            }
        }
        esporteAtleta = 'A';
    }
    sumAtletas = corrida + salto + lancamento;
    printf("%d %d %d %d", corrida, salto, lancamento,sumAtletas);
}