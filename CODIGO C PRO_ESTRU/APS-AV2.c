#include <stdlib.h>
#include <stdio.h>
#define TAM 25
#define TAM2 4

void Menu();
void Cadastro();
void Listar();
void GravaArquivo();
void AlocarMemoria();
//Estrutura do tipo vetor de registro
typedef struct
{
    char nome[TAM], cod[TAM2];
    float media;
} DadosAluno;
//***********************************
//variaveis globais
DadosAluno *aluno;
int Opcao, total,i=0;
//***********************************
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
    scanf("%d", &Opcao);
    system("cls");
    switch (Opcao)
    {
    case 1:
        Cadastro();
        break;
    case 2:
        Listar();
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
    AlocarMemoria();
    for ( i = 0; i < total; i++)
    {
        printf("--------Cadastro Aluno %d--------\n", i + 1);
        printf("Aluno: ");
        scanf("%s", &aluno[i].nome);
        printf("Matricula: ");
        scanf("%s", &aluno[i].cod);
        printf("Media: ");
        scanf("%f", &aluno[i].media);
        GravaArquivo();
    }
    system("cls");
    printf("\n---------------");
    printf("\nDados gravados!");
    printf("\n---------------");
    printf("\nVoltar ao menu?|1-Sim|ou|2-Sair|\n");
    scanf("%d", &Opcao);
    system("cls");
    Opcao == 1 ? Menu() : exit(1);
}
void GravaArquivo()
{
    FILE *arqaluno;
    arqaluno = fopen("DadosAluno.txt", "a");
    if (arqaluno == NULL)
    {
        printf("Erro na abertura do arquivo!");
        exit(1);
    }
    //Gravando dados dos alunos em um arquivo
    fprintf(arqaluno, "\n----------------------Aluno %d----------------------- \n",i+1);
    fprintf(arqaluno, "Nome: %s| Matricula: %s | Media: %.1f \n", aluno[i].nome, aluno[i].cod, aluno[i].media);
    fclose(arqaluno);
}
void AlocarMemoria()
{
    printf("Quantindade de alunos:");
    scanf("%d", &total);
    system("cls");
    //alocando memoria com malloc para  estrura (vetor de registro) com a quantidade que usuario solicitar.
    aluno = (DadosAluno *)malloc(total * sizeof(DadosAluno));
    if (!aluno)
    {
        printf("Erro na alocação");
        exit(1);
    }
}
void Listar()
{  
    for (i = 0; i < total; i++)
    {
        printf("\n-------- Aluno %d--------\n", i + 1);
        printf("Nome: %s ",aluno[i].nome);
        printf("\nMatricula: %s ",aluno[i].cod);
        printf("\nMedia: %.1f ",aluno[i].media);        
    }
        
}