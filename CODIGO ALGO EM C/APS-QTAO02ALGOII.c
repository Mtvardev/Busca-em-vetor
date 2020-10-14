#include <stdio.h>
#include <stdlib.h>
/*GRUPO: ANTONIO MATEUS VARELO DE SOUSA - MATRÍCULA 2020100195
         SAMUEL FERNANDO DA SILVA TAVARES - MATRÍCULA 2020101170
  TURMA: 147
   */ 

main(){
	printf(" Alunos: Antonio Mateus Varelo de Sousa - Matricula: 2020100195\n ");
	printf("        Samuel Fernando da Silva Tavares - Matricula: 2020101170\n");
	printf(" Turma: 147\n");
	
	int n[10],i,vetx[5],vety[5],ctpar=0,ctimp=0,vlpo_par[5],vlpo_imp[5];
	    
		for(i=0;i<10;i++){
	     printf("\nDigite numero inteiro: ");  scanf("%d",&n[i]); 
	  
	      if (i% 2==0){
	      	 
 	     	 vetx[ctpar]= i;
 	     	 vlpo_par[ctpar]=n[i];
 	     	 ctpar+=1;
 	     }else{
 	     	vety[ctimp]=i;
 	     	vlpo_imp[ctimp]=n[i];
 	     	ctimp+=1;
		  }
 	     	
 	     	 
}

        for(i=0;i<5;i++){
        	printf("\nINDICE PAR: %d | VALOR NA POSICAO: %d",vetx[i],vlpo_par[i]);
		}
		
		  printf("\n");
		  
		for(i=0;i<5;i++){
        	printf("\nINDICE IMPAR: %d | VALOR NA POSICAO: %d",vety[i],vlpo_imp[i]);
		}
}
