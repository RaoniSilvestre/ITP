#include <stdio.h>
#include <string.h>

const char fragment[] = "QUE A FORCA ESTEJA COM VOCE";

const char S[] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

void descriptografar(char *criptedList, char *uncriptList, int criptKey)
{
  int cifraArray[4] =
      {criptKey / 1000,
       criptKey / 100 % 10,
       criptKey / 10 % 100 % 10,
       criptKey / 1 % 10};

  int contador = 0, shift, index;
  for (int i = 0; i < strlen(criptedList) - 1; i++)
  {
    for (int j = 0; j < 40; j++)
    {
      if (criptedList[i] == S[j])
      {
        index = j;
        break;
      }
    }

    shift = index - cifraArray[contador];
    if (shift < 0)
    {
      shift = 40 + shift;
    }

    uncriptList[i] = S[shift];

    if (contador == 3)
      contador = -1;
    contador++;
  }
}

void decifrarMensagem(char *inputMessage, int criptKey)
{

  int cifraArray[4] =
      {criptKey / 1000,
       criptKey / 100 % 10,
       criptKey / 10 % 100 % 10,
       criptKey / 1 % 10};

  int contador = 0, shift, index;
  for (int i = 0; i < strlen(inputMessage) - 1; i++)
  {
    for (int j = 0; j < 40; j++)
    {
      if (inputMessage[i] == S[j])
      {
        index = j;
        break;
      }
    }

    shift = index - cifraArray[contador];
    if (shift < 0)
    {
      shift = 40 + shift;
    }

    inputMessage[i] = S[shift];

    if (contador == 3)
    {
      contador = -1;
    }
    contador++;
  }

  if (criptKey < 1000)
    printf("0");
  if (criptKey < 100)
    printf("0");
  if (criptKey < 10)
    printf("0");
  printf("%d\n%s", criptKey, inputMessage);
}

int main()
{
  int chaveRealOficial = -1, a = 0, n, N, na, Na;
  char inputMessage[250];
  char criptedList[28];
  char uncriptList[28];

  fgets(inputMessage, 249, stdin);

  for (int i = 0; i < strlen(inputMessage) - 28; i++)
  {
    a++;
    for (int jota = 0; jota < 28; jota++)
    {
      criptedList[jota] = inputMessage[i + jota];
    }

    for (int j = 0; j < 9999; j++)
    {
      descriptografar(criptedList, uncriptList, j);

      for (int k = 0; k < 28; k++)
      {
        if (uncriptList[k] != fragment[k])
          break;
        if (k == 27)
        {
          chaveRealOficial = j;
          N = j / 1000;
          n = j / 100 % 10;
          Na = j / 10 % 100 % 10;
          na = j / 1 % 10;
          if (a == 2)
          {
            chaveRealOficial = (N * 100) + (n * 10) + (na * 1) + (Na * 1000);
          }
          else if (a == 3)
          {
            chaveRealOficial = (N * 10) + (n * 1) + (na * 1000) + (Na * 100);
          }
          else if (a == 4)
          {
            chaveRealOficial = (N * 1) + (n * 1000) + (na * 100) + (Na * 10);
          }
          decifrarMensagem(inputMessage, chaveRealOficial);
          return 0;
        }
      }
    }
    if (a == 4)
      a = 0;
  }

  printf("Mensagem nao e da Resistencia!");
  return 0;

}