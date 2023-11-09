#include <stdio.h>

void completarTela(int lin, int col, char tela[][col]) {
  char input;
  for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
      scanf(" %c", &input); 
      tela[i][j] = input;
    }
  }
}

void imprimirTela(int lin, int col, char *tela) {
  for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
      printf("%c ", tela[i * col + j]);
    }
    printf("\n");
  }
}

void pintar(int lin, int col, char tela[][col], int x, int y, char caractere, char referencia) {
  if (x < 0 || x >= lin || y < 0 || y >= col || tela[x][y] != referencia) {
    return;
  }

  tela[x][y] = caractere;

  pintar(lin, col, tela, (x + 1), y, caractere, referencia);
  pintar(lin, col, tela, (x - 1), y, caractere, referencia);
  pintar(lin, col, tela, x, (y + 1), caractere, referencia);
  pintar(lin, col, tela, x, (y - 1), caractere, referencia);
}

int main(int argc, char *argv[]) {
  int lin, col, x, y;
  char caractere;

  scanf("%d %d", &lin, &col);

  char tela[lin][col];
  completarTela(lin, col, tela);

  scanf("%d %d", &x, &y);
  scanf(" %c", &caractere); 

  pintar(lin, col, tela, x, y, caractere, tela[x][y]);

  imprimirTela(lin, col, &tela[0][0]);
  return 0;
}
