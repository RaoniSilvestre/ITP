#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  char **PARTICIPANTES = NULL;
  int N = 0;
  int *sorteados = NULL;
  int semente;

  printf(
      "Digite os nomes dos participantes (digite 'acabou' para encerrar):\n");

  // Aloca espaço inicial para a lista de nomes
  PARTICIPANTES = (char **)malloc(sizeof(char *));

  if (PARTICIPANTES == NULL) {
    printf("Erro de alocação de memória.\n");
    return 1;
  }

  char nome[100];

  while (1) {
    scanf("%s", nome);

    if (strcmp(nome, "acabou") == 0) {
      break;
    }

    // Aloca espaço para o novo nome
    PARTICIPANTES[N] = (char *)malloc(strlen(nome) + 1);

    if (PARTICIPANTES[N] == NULL) {
      printf("Erro de alocação de memória.\n");
      return 1;
    }

    strcpy(PARTICIPANTES[N], nome);
    N++;

    // Redimensiona o vetor de participantes
    PARTICIPANTES = (char **)realloc(PARTICIPANTES, (N + 1) * sizeof(char *));
  }

  printf("Digite a semente para geração de números aleatórios: ");
  scanf("%d", &semente);
  srand(semente);

  sorteados = (int *)malloc(N * sizeof(int));

  if (sorteados == NULL) {
    printf("Erro de alocação de memória.\n");
    return 1;
  }

  for (int i = 0; i < N; i++) {
    sorteados[i] = 0;
  }

  printf("Realizando o sorteio:\n");

  while (1) {
    int indice_participante = rand() % N;

    if (sorteados[indice_participante] == 0) {
      printf("Sorteado: %s\n", PARTICIPANTES[indice_participante]);
      sorteados[indice_participante] = 1;
    }

    int todosSorteados = 1;

    for (int i = 0; i < N; i++) {
      if (sorteados[i] == 0) {
        todosSorteados = 0;
        break;
      }
    }

    if (todosSorteados) {
      break;
    }
  }

  // Libera a memória alocada
  for (int i = 0; i < N; i++) {
    free(PARTICIPANTES[i]);
  }

  free(PARTICIPANTES);
  free(sorteados);

  return 0;
}
