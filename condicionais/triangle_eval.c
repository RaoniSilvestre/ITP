#include <stdio.h>

int main () {
    int lado1,lado2,lado3;
    scanf("%d %d %d", &lado1,&lado2,&lado3);
    if ((lado1 >= (lado2+lado3)) || (lado2 >= (lado1+lado3)) || (lado3 >=(lado1+lado2)))
    {
        printf("impossível");
    }   else
    {
        printf("possível");
    }
    return 0;
}