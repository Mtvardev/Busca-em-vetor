#include <stdlib.h>
#include <stdio.h>
main()
{
    int *v1,*v2,ctpar,ctimp,i,vet [10];
    ctpar=1;
    ctimp=1;
    for(i=0;i<10;i++)
    {
     printf("Digite numero da posicao %d:",i+1); scanf("%d",&vet[i]);
     if(vet[i] %2==0)
     {
         ctpar+=1;  
     }else
     {
         ctimp+=1;
     }
    }
    v1=(int*)malloc(ctimp*sizeof(int));
    v2=(int*)malloc(ctpar*sizeof(int));
    ctpar=0;
    ctimp=0;
    for(i=0;i<10;i++)
    {
        if(vet[i] %2==0)
        {
            v2[ctpar]=vet[i];
            ctpar+=1;
        }else
        {
            v1[ctimp]=vet[i];
            ctimp+=1;
        }
    }
     printf("\nimpares:");
    for(i=0;i<ctimp;i++)
    {
      printf("\n%d",v1[i]);
    }
     printf("\nPares:");
    for(i=0;i<ctpar;i++)
    {
      printf("\n%d",v2[i]);
    }
}
