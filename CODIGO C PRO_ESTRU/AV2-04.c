#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void Troca(char *TrocaVogais);
void Exibe(char *MostraFrase);

main()
{
  char frase[TAM];
       printf("\nDigite uma frase(Max:100 car.):");
       fgets(frase,TAM,stdin);
       Troca(&frase);
       Exibe(&frase);    
}
void Troca(char *TrocaVogais)
{
     for(int i=0;i<strlen(TrocaVogais);i++)
    {
          switch(TrocaVogais[i])
          {
            case 'a':
               TrocaVogais[i]='u';
               break;
            case 'e':
                TrocaVogais[i]='o';
                break;
            case 'i':
                TrocaVogais[i]='u';
                break;
            case 'o':
                TrocaVogais[i]='a';
                break;
            case 'u':
                TrocaVogais[i]='e';
                break;
          }
    } 
}
void Exibe(char *MostraFrase)
{
    printf("\nFrase digitada: %s",MostraFrase);
}