#include <stdio.h>
#include <string.h>

int main() {
    int tamPrefix, tamSufix;
    scanf("%d", &tamPrefix);

    char prefixos[tamPrefix][20];
    for (int i = 0; i < tamPrefix; i++) {
        scanf("%s", prefixos[i]);
    }

    scanf("%d", &tamSufix);

    char sufixos[tamSufix][20];
    for (int i = 0; i < tamSufix; i++) {
        scanf("%s", sufixos[i]);
    }

    char palavra[70];
    
    while (scanf("%s", palavra) != EOF && strcmp(palavra, "-1") != 0) {
        int tamPalavra = strlen(palavra);
        int inicio = 0, fim = tamPalavra;

        for (int i = 0; i < tamPrefix; i++) {
            int tamPrefixo = strlen(prefixos[i]);
            if (tamPalavra >= tamPrefixo && strncmp(palavra, prefixos[i], tamPrefixo) == 0) {
                inicio = tamPrefixo;
                break;
            }
        }

        for (int i = 0; i < tamSufix; i++) {
            int tamSufixo = strlen(sufixos[i]);
            if (tamPalavra >= tamSufixo && strcmp(palavra + tamPalavra - tamSufixo, sufixos[i]) == 0) {
                fim -= tamSufixo;
                break;
            }
        }

        if (inicio < fim) {
            for (int i = inicio; i < fim; i++) {
                printf("%c", palavra[i]);
            }
            printf("\n");
        }
    }

    return 0;
}