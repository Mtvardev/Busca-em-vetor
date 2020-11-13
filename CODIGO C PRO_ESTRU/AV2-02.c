#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 10
void Result(int *vet);
main()
{
  int vet10[TAM], chave;
  bool logico;
  for (int i = 0; i < TAM; i++)
  {
    printf("Numero p/ posicao %d:.", i);
    scanf("%d", &chave);
    for (int j = 0; j < TAM; j++)
    {
      if (vet10[j] == chave)
      {
        do
        {
          printf("\nTente outro numero p/ posicao |%d|:.", i);
          scanf("%d", &chave);
          for (j = 0; j < TAM; j++)
          {
            if (vet10[j] == chave)
            {
              logico = true;
              break;
            }
            else
            {
              logico = false;
            }
          }
        }while (logico);
      }
    }
    vet10[i] = chave;
  }
  printf("Valores diferentes:");
  Result(&vet10);
}
void Result(int *vet)
{
  for (int i = 0; i < TAM; i++)
  {
    printf("\n%d", vet[i]);
  }
}
