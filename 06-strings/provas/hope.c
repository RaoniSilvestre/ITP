#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char S[] = {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

void criptografar(char *mensagem, int cifra)
{
  int cifraArray[4] =
      {cifra / 1000,
       cifra / 100 % 10,
       cifra / 10 % 100 % 10,
       cifra / 1 % 10};

  int contador = 0;

  int shift;
  int index;
  for (int i = 0; i < strlen(mensagem); i++)
  {
    for (int j = 0; j < 40; j++)
    {
      if (mensagem[i] == S[j])
      {
        index = j;
        break;
      }
    }

    shift = index + cifraArray[contador];
    if (shift > 39)
    {
      shift = shift - 40;
    }

    mensagem[i] = S[shift];

    if (contador == 3)
    {
      contador = -1;
    }
    contador++;
  }
  printf("%s", mensagem);
}

int contem_minusculo(const char *str)
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (islower(str[i]))
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int criptografia;
  scanf("%d", &criptografia);

  while (getchar() != '\n')
    ;

  char mensagem[250];
  fgets(mensagem, 249, stdin);

  if (criptografia < 0 || criptografia > 9999)
  {
    printf("Chave inválida!");
  }
  else
  {

    if (contem_minusculo(mensagem))
    {
      printf("É válido!\n");
      criptografar(mensagem, criptografia);
    }
    else if (!contem_minusculo(mensagem))
    {
      printf("Caractere inválido na entrada!\n");
    }
  }

  return 0;
}
