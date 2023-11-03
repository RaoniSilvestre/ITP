#include <stdio.h>
#include <string.h>

int main() {
    // Definindo uma lista com capacidade para 3 strings.
    // Cada string pode ter até 99 caracteres mais o caractere nulo '\0'.
    char lista_de_strings[3][100];
    
    printf("Digite 3 strings, pressionando Enter após cada uma:\n");
    
    // Recebendo as strings da entrada padrão.
    for(int i = 0; i < 3; i++) {
        fgets(lista_de_strings[i], sizeof(lista_de_strings[i]), stdin);
        
        // Remove o '\n' se presente, pois fgets() pega o '\n' também.
        if (lista_de_strings[i][strlen(lista_de_strings[i]) - 1] == '\n') {
            lista_de_strings[i][strlen(lista_de_strings[i]) - 1] = '\0';
        }
    }

    // Imprimindo as strings da lista.
    printf("\nAs strings inseridas são:\n");
    for(int i = 0; i < 3; i++) {
        printf("%s\n", lista_de_strings[i]);
    }

    return 0;
}

