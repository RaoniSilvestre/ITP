#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct conjunto {
  int tamanho;
  int conjunto[100];
};

void adicionarElemento(struct conjunto *C, int elemento) {
  for (int i = 0; i < C->tamanho; i++) {
    if (C->conjunto[i] == elemento) {
      return;
    }
  }
  C->conjunto[C->tamanho] = elemento;
  C->tamanho++;
}

void lerConjunto(char *itens, struct conjunto *A) {
  char *token = strtok(itens, " ");
  while (token != NULL) {
    adicionarElemento(A, atoi(token));
    token = strtok(NULL, " ");
  }
}

void uniao(struct conjunto *A, struct conjunto *B, struct conjunto *U) {
  for (int i = 0; i < A->tamanho; i++) {
    adicionarElemento(U, A->conjunto[i]);
  }
  for (int i = 0; i < B->tamanho; i++) {
    adicionarElemento(U, B->conjunto[i]);
  }
}

void intersecao(struct conjunto *A, struct conjunto *B, struct conjunto *I) {
  for (int i = 0; i < B->tamanho; i++) {
    for (int j = 0; j < A->tamanho; j++) {
      if (A->conjunto[j] == B->conjunto[i]) {
        adicionarElemento(I, A->conjunto[j]);
        break;
      }
    }
  }
}

void imprimirUniao(struct conjunto *U) {
  printf("A união B == {");
  if (U->tamanho == 0) {
    printf("vazio");
  } else {
    for (int i = 0; i < U->tamanho; i++) {
      printf("%d%s", U->conjunto[i], i == U->tamanho - 1 ? "" : " ");
    }
  }
  printf("}\n");
}

void imprimirIntersecao(struct conjunto *I) {
  printf("A interseção B == {");
  if (I->tamanho == 0) {
    printf("vazio");
  } else {
    for (int i = 0; i < I->tamanho; i++) {
      printf("%d%s", I->conjunto[i], i == I->tamanho - 1 ? "" : " ");
    }
  }
  printf("}\n");
}

int main(int argc, char *argv[]) {
  // Declaração de variável
  struct conjunto A, B, U, I;
  A.tamanho = B.tamanho = U.tamanho = I.tamanho = 0;
  int tamA, tamB;
  char itensA[100], itensB[100];

  // Input A
  scanf(" %d", &tamA);
  if (tamA != 0) {
    scanf(" %99[^\n]", itensA);
    lerConjunto(itensA, &A);
  }
  // Input A
  scanf(" %d", &tamB);
  if (tamB != 0) {
    scanf(" %99[^\n]", itensB);
    lerConjunto(itensB, &B);
  }

  //Calcular união dos A,B.
  uniao(&A, &B, &U);
  //Calcular interseção dos A,B.
  intersecao(&A, &B, &I);

  // Output União dos A, B.
  imprimirUniao(&U);
  // Output Interseção dos A,B.
  imprimirIntersecao(&I);
  return 0;
}
