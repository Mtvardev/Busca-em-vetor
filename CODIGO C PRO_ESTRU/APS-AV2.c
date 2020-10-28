#include <stdlib.h>
#include <stdio.h>
#define TAM 25
#define TAM2 10
void Menu();
void Cadastro();
void Listar();
void CriaArquivo();
//Estrutura do tipo vetor de registro
typedef struct 
{
 char nome[TAM],matricula[TAM2];
 float media;   
}DadosAluno;

//variaveis globais
DadosAluno aluno;
int Opcao,total;
        main()
        {
        Menu();
        }
void Menu()
{
 printf("-----------------------");   
 printf("\n       Menu");
 printf("\n-----------------------");  
 printf("\nESCOLHA UMA OPCAO:");
 printf("\n1-Entrar com novos dados :");
 printf("\n2-Listar Dados:");
 printf("\n3-Sair:\n");
 scanf("%d",&Opcao);
 system("cls");
    switch (Opcao)
    {
    case 1:
        Cadastro();
        break;
    case 2:
        //Listar();
        break;
    case 3:
        printf("Saindo.......");
        printf("\n.....");
        break;
    default:
        printf("Opcao invalida! Tente novamente.....\n");
        Menu();
        break;
    }
}
void Cadastro()
{
    printf("Quantindade:"); scanf("%d",&total);
     system("cls");
}