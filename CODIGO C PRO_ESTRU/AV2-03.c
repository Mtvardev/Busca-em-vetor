#include <stdio.h>
#include <stdlib.h>
#define TAM 5
main(){
  int i,j,x,Mat[TAM][TAM];
  char booleano=0;

  for (i=0;i<TAM;i++)
  {
     for(j=0;j<TAM;j++)
     {
       printf("\nValor p/ Linha[%d] Coluna[%d]: ",i,j);
       scanf("%d",&Mat[i][j]);
     }
  }
    printf("Digite valor para buscar:\n");scanf("%d",&x);
   for(i=0;i<TAM;i++)
   {
      for(j=0;j<TAM;j++)
      {
        if(x==Mat[i][j])
        {
          booleano=1;
          printf("\nValor encontrado!");
          printf("Linha[%d] Coluna[%d]\n",i,j);
        }
      }
   }
     if(booleano==0)
     {
       printf("Nao encontrado!");
     }
  }