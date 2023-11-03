#include <stdio.h>
#include <stdlib.h>

int getRange(int n, int cells[n], int distance, int user, int *leftIndex,
             int *rightIndex) {

  int flag = 0;

  for (int i = 0; i < n; i++) {

    if (abs(cells[i] - user) <= distance && cells[i] < user) {
      *leftIndex = i;
      flag = 1;
      break;
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    if (abs(cells[i] - user) <= distance && cells[i] > user) {
      *rightIndex = i;
      flag = 1;
      break;
    }
  }

  return flag;
}

int main(int argc, char *argv[]) {

  int quantidadeCelulas;
  int distanciaCelula;
  int posicaoUsuario;
  int leftIndex, rightIndex;
  int flag;

  
  scanf("%d %d %d", &quantidadeCelulas, &distanciaCelula, &posicaoUsuario);

  int celulas[quantidadeCelulas];

  for (int i = 0; i < quantidadeCelulas; i++) {
    int celulaAtual;
    scanf("%d", &celulaAtual);
    celulas[i] = celulaAtual;
  }

  flag = getRange(quantidadeCelulas, celulas, distanciaCelula, posicaoUsuario,
                  &leftIndex, &rightIndex);

  if (flag) {
    for (int i = leftIndex; i < rightIndex + 1; i++) {
      printf("%d ", celulas[i]);
    }
  } else {
    printf("USUARIO DESCONECTADO");
  }

  return 0;
}