#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted,
                   int *second_most_voted) {
  int count[11] = {0};

  for (int i = 0; i < n; i++) {
    int voto = votes[i];
    count[voto]++;
  }
  for (int i = 1; i <= 10; i++) {
    if (count[i] > count[*most_voted]) {
      *second_most_voted = *most_voted;
      *most_voted = i;
    } else if (count[i] > count[*second_most_voted]) {
      *second_most_voted = i;
    }
  }
}

int main(int argc, char *argv[]) {
  int quantidadeVotos;
  int eleito = 0, vice;
  scanf("%d", &quantidadeVotos);
  int votos[quantidadeVotos];

  for (int i = 0; i < quantidadeVotos; i++) {
    scanf(" %d", &votos[i]);
  }

  compute_votes(quantidadeVotos, votos, &eleito, &vice);

  printf("Mais votado: %d\nSegundo mais votado: %d\n", eleito, vice);
  return 0;
}
