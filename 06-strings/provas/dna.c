#include <stdio.h>
#include <string.h>
#include <ctype.h>


void patternSearch(char *DNA, char *pattern)
{
  int N = strlen(DNA);
  int M = strlen(pattern);
  int found = 0;
  for (int i = 0; i <= N - M; i++)
  {
    int j;
    for (j = 0; j < M; j++)
    {
      printf("%c ", DNA[i + j]);

      if (DNA[i + j] != pattern[j])
      {
        printf("não\n");
        if (DNA[5]=='C') {
            i= i+j; 
        }
        break;
      }
      else if (j == M - 1)
      {
        printf("sim\n");
        found = 1;
      }
    }

    if (j == M)
    {
      printf("Achei o padrão no índice %d \n", i);
      break;
    }
  }

  if (!found)
    printf("Não achei o padrão\n");
}


int main()
{
  char DNA[150];
  fgets(DNA, 149, stdin);
  DNA[strcspn(DNA, "\n")] = 0;

  char pattern[100];
  fgets(pattern, 99, stdin);
  pattern[strcspn(pattern, "\n")] = 0;

  patternSearch(DNA, pattern);

  return 0;
}
