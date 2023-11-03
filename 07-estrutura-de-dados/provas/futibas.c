#include <stdio.h>
#include <string.h>

struct time
{
  char nome[100];
  int golsMarcados;
  int golsSofridos;
};

int main()
{
  int qntTimes;
  char h[100];
  struct time timesArray[10];
  struct time coisa1;
  scanf("%d", &qntTimes);

  for (int i = 0; i < qntTimes; i++)
  {
    scanf(" %[^\n]", timesArray[i].nome);
    scanf("%d", &timesArray[i].golsMarcados);
    scanf("%d", &timesArray[i].golsSofridos);
  }

  for (int j = 1; j < qntTimes; j++)
  {
    for (int i = 0; i < qntTimes - 1; i++)
    {
      if (timesArray[i].golsMarcados < timesArray[i + 1].golsMarcados)
      {
        coisa1 = timesArray[i];
        timesArray[i] = timesArray[i + 1];
        timesArray[i + 1] = coisa1;
      }
    }
  }

  for (int j = 1, i = 0; i < qntTimes; i++, j++)
  {
    printf("%d - %s\n", j, timesArray[i].nome);
    printf("Gols marcados: %d\n", timesArray[i].golsMarcados);
    printf("Gols sofridos: %d\n", timesArray[i].golsSofridos);
  }

  return 0;
}