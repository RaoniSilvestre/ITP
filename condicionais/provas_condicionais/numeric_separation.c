#include <stdio.h>

int main() {
    int num;
    int d1, d2, d3, d4, d5; // Para armazenar até 5 dígitos

    scanf("%d", &num);

    if(num < 1 || num > 100000) {
        printf("Numero fora do intervalo especificado!\n");
        return 1;
    }

    // Checando cada faixa de número e separando os dígitos
    if (num < 10) {
        printf("%d\n", num);
    } else if (num < 100) {
        d1 = num % 10;
        d2 = num / 10;
        printf("%d\n%d\n", d2, d1);
    } else if (num < 1000) {
        d1 = num % 10; num /= 10;
        d2 = num % 10; num /= 10;
        d3 = num;
        printf("%d\n%d\n%d\n", d3, d2, d1);
    } else if (num < 10000) {
        d1 = num % 10; num /= 10;
        d2 = num % 10; num /= 10;
        d3 = num % 10; num /= 10;
        d4 = num;
        printf("%d\n%d\n%d\n%d\n", d4, d3, d2, d1);
    } else {
        d1 = num % 10; num /= 10;
        d2 = num % 10; num /= 10;
        d3 = num % 10; num /= 10;
        d4 = num % 10; num /= 10;
        d5 = num;
        printf("%d\n%d\n%d\n%d\n%d\n", d5, d4, d3, d2, d1);
    }

    return 0;
}