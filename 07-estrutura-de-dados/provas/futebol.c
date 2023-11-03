#include <stdio.h>
#include <string.h>

struct Time
{
  char nome[201];
  int vitorias;
  int empates;
  int derrotas;
  int gols_feitos;
  int gols_sofridos;
};

int pontos(struct Time time)
{
  return time.vitorias * 3 + time.empates;
}

int saldoGols(struct Time time)
{
  return time.gols_feitos - time.gols_sofridos;
}

void lerTimes(struct Time times[], int n)
{
  for (int i = 0; i < n; i++)
  {
    scanf(" %200[^;];%d %d %d %d %d\n", times[i].nome, &times[i].vitorias, &times[i].empates, &times[i].derrotas, &times[i].gols_feitos, &times[i].gols_sofridos);
  }
}

void imprimirTabela(struct Time times[], int n)
{
  struct Time z;

  for (int j = 1; j < n; j++)
  {
    for (int i = 1; i <= n - 1; i++)
    {
      if (pontos(times[i - 1]) > pontos(times[i]))
      {
        z = times[i];
        times[i] = times[i - 1];
        times[i - 1] = z;
      }
    }
  }

  for (int j = 1; j < n; j++)
  {
    for (int i = 1; i <= n - 1; i++)
    {
      if (times[i - 1].vitorias > times[i].vitorias && pontos(times[i - 1]) == pontos(times[i]))
      {
        z = times[i];
        times[i] = times[i - 1];
        times[i - 1] = z;
      }
    }
  }

  for (int j = 1; j < n; j++)
  {
    for (int i = 1; i <= n - 1; i++)
    {
      if (times[i - 1].vitorias == times[i].vitorias && pontos(times[i - 1]) == pontos(times[i]) && saldoGols(times[i - 1]) > saldoGols(times[i]))
      {
        z = times[i];
        times[i] = times[i - 1];
        times[i - 1] = z;
      }
    }
  }

  printf("Tabela do campeonato:\nNome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%s| %d| %d| %d| %d| %d| %d| %d| %d", times[i].nome, pontos(times[i]),
           times[i].vitorias + times[i].empates + times[i].derrotas, times[i].vitorias,
           times[i].empates, times[i].derrotas, times[i].gols_feitos, times[i].gols_sofridos,
           saldoGols(times[i]));
    if (strcmp(times[i - 1].nome, times[i].nome) != 0)
      printf("\n");
  }

  printf("\nTimes na zona da libertadores:\n");
  for (int i = n - 1; i >= n - 6; i--)
  {
    printf("%s\n", times[i].nome);
  }

  printf("\nTimes rebaixados:\n");
  for (int i = 0; i < 4; i++)
  {
    if (i >= 0)
    {
      printf("%s\n", times[i].nome);
    }
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  struct Time times[100];

  lerTimes(times, n);
  imprimirTabela(times, n);

  return 0;
}