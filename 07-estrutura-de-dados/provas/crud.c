#include <stdio.h>
#include <string.h>
struct Pessoa {
  char nome[50];
  int idade;
  char sexo;
};

int qntInserida = 0;

struct Pessoa criar(char nomeAtual[50], int idadeAtual, char sexoAtual) {
  struct Pessoa pessoaAtual;
  int tam = strlen(nomeAtual);
  strcpy(pessoaAtual.nome, nomeAtual);
  pessoaAtual.idade = idadeAtual;
  pessoaAtual.sexo = sexoAtual;
  return pessoaAtual;
}

void inserir(struct Pessoa pessoaAtual, struct Pessoa vetorPessoas[]) {
  vetorPessoas[qntInserida] = pessoaAtual;
  qntInserida++;
}

void deletar(struct Pessoa deletarPessoa, struct Pessoa vetorPessoas[]) {
  int pos = -1;
  for (int i = 0; i < qntInserida; i++) {
    if (strcmp(vetorPessoas[i].nome, deletarPessoa.nome) == 0 &&
        vetorPessoas[i].idade == deletarPessoa.idade &&
        vetorPessoas[i].sexo == deletarPessoa.sexo) {
      pos = i;
      break;
    }
  }

  if (pos != -1) {
    for (int i = pos; i < qntInserida - 1; i++) {
      strcpy(vetorPessoas[i].nome, vetorPessoas[i + 1].nome);
      vetorPessoas[i].idade = vetorPessoas[i + 1].idade;
      vetorPessoas[i].sexo = vetorPessoas[i + 1].sexo;
    }
    qntInserida--;
  }
}

void imprimir(struct Pessoa vetorPessoas[]) {
  for (int i = 0; i < qntInserida; i++) {
    printf("%s,%d,%c\n", vetorPessoas[i].nome, vetorPessoas[i].idade,
           vetorPessoas[i].sexo);
  }
}

int main(void) {
  struct Pessoa vetorPessoas[100];
  char nome[50];
  int idade;
  char sexo;
  char cmd = 'k';
  while (cmd != 'p') {
    scanf("%c", &cmd);
    if (cmd == 'i' || cmd == 'd') {
      scanf(" %49[^\n]", nome);
      scanf("%d", &idade);
      scanf(" %c", &sexo);

      if (cmd == 'i') {
        inserir(criar(nome, idade, sexo), vetorPessoas);
      }

      if (cmd == 'd') {
        deletar(criar(nome, idade, sexo), vetorPessoas);
      }
    }
  }
  imprimir(vetorPessoas);

  return 0;
}