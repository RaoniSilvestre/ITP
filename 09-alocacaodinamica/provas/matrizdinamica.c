#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int nlin, ncol;
  int **mat;
} Matrix;

Matrix *createMatrix(int nlin, int ncol) {
  Matrix *matrizinha = (Matrix *)malloc(sizeof(Matrix));
  matrizinha->nlin = nlin;
  matrizinha->ncol = ncol;
  matrizinha->mat = (int **)malloc(nlin * sizeof(int));
  for (int i = 0; i < nlin; i++) {
    matrizinha->mat[i] = (int *)malloc(ncol * sizeof(int));
  }
  return matrizinha;
}

void readMatrix(Matrix *m) {
  for (int i = 0; i < m->nlin; i++) {
    for (int j = 0; j < m->ncol; j++) {
      scanf(" %d", &m->mat[i][j]);
    }
  }
}

void printMatrix(Matrix *m) {
  for (int i = 0; i < m->nlin; i++) {
    for (int j = 0; j < m->ncol; j++) {
      printf("%d ", m->mat[i][j]);
      if (j + 1 == m->ncol)
        printf("\n");
    }
  }
}

void destroyMatrix(Matrix **m) {
  if (*m) {
    for (int i = 0; i < (*m)->nlin; i++) {
      free((*m)->mat[i]);
    }
    free((*m)->mat);
    free(*m);
    *m = NULL;
  }
}

int main() {
  int lin, col;
  Matrix *mat;

  scanf("%i %i", &lin, &col);
  mat = createMatrix(lin, col);
  readMatrix(mat);
  printMatrix(mat);
  destroyMatrix(&mat);
  if (mat == NULL) {
    printf("OK\n");
  }
  return 0;
}