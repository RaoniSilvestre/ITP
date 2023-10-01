#include <stdio.h>

float calcularMedia(char tipo, float n1, float n2, float n3)
{
    float media = 0;

    if (tipo == 'A')
    {
        media = (n1 + n2 + n3) / 3;
    }
    else if (tipo == 'P')
    {
        media = ((n1 * 4) + (n2 * 5) + (n3 * 6)) / 15;
    }

    return media;
}

int main()
{

    char tipo;
    float n1 = 0, n2 = 0, n3 = 0, media = 0;

    scanf("%c", &tipo);
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = calcularMedia(tipo, n1, n2, n3);

    printf("Media %f", media);
    return 0;
}