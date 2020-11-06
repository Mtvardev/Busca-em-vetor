#include <stdio.h>
#include  <stdlib.h>
#define TAM 10
void Verifica(int *c,int *vet);
void Result(int *vet);
main()
{
    int vet10[TAM],chave;
           
           Verifica(&chave,&vet10);
           Result(&vet10);
}       
void Verifica(int *c,int *vet)
{
    for(int i=0;i<TAM;i++)
   {
        printf("Numero p/ posicao %d:.",i+1);scanf("%d",&c);
        for(int i=0;i<TAM;i++)
       {
           if(vet[i]==c)
            {
               do
               {
                 printf("\nTente outro numero p/ posicao %d:.",i+2);scanf("%d",&c);
               }while(vet[i]==c);
            }
        }
          vet[i]=c;
    }
  printf("Valores diferentes:");
}
void Result(int *vet)
{
    for(int i=0;i<TAM;i++)
        {
            printf("\n%d",vet[i]);
        }
} 
   
