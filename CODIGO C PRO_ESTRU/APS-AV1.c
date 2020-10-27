//************ALUNO****************Matrícula***TURMA**//
//Antonio Mateus Varelo de Sousa//2020100195//T145//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 30
#define TamanhoVetor 10
void sexo();
void Idade();
void Menu();
void ColetaDados();


// Declaração de structs como tipos de forma funcional
typedef struct
{
    char nome[TAM];
    char sexo;
    int idade;
} dados;

// *****************************************************

// DeclaraÃ§Ã£o de variaveis globais
dados p1[TamanhoVetor];

int OpcaoSelecionada;
// *******************************************************************

int main()
{
    ColetaDados();
    Menu();
}

void ColetaDados()
{
        for (int i = 0; i < TamanhoVetor; i++)
        {
            printf("Cadastro Pessoa : %d",i+1 );
            printf("\nNome: ");
            scanf("%s", p1[i].nome);
            printf("Sexo(M/F): ");
            scanf(" %c", &p1[i].sexo);
            p1[i].sexo = toupper(p1[i].sexo);
            printf("Idade:");
            scanf(" %d", &p1[i].idade);
            system("cls");


        
       }
}

void Menu()
{
    printf("Busca: ");
    printf("\n1-Por Idade: ");
    printf("2-Por sexo: ");
    printf("3-Sair\n");
    scanf("%d", &OpcaoSelecionada);
    system("cls");

    switch (OpcaoSelecionada)
    {
    case 1:
        Idade();
        break;
    case 2:
        sexo();
        break;
    case 3:
        printf("Encerrado!");
        break;
    default:
        printf("Erro!");
        break;
    }
}
void Idade()
{
    int contagem = 0;
    int idadeSelecionada = 0;
    printf("Informe uma  idade : ");
    scanf("%d", &idadeSelecionada);
   
   

    for (int i = 0; i <=TamanhoVetor; i++)
    {
            if (p1[i].idade == idadeSelecionada)
            {
                printf("\n\tNome : %s ", p1[i].nome);
                contagem++;
            }
    
        
    }
    printf("\n\tTotal : %d ", contagem);
}

void sexo()
{
    printf("1-Masculino ou 2-Feminino:\n");
    scanf("%d", &OpcaoSelecionada);
    char Sexo = OpcaoSelecionada == 1 ? 'M' : 'F';

    switch (Sexo)
    {
    case 'F':
        printf("\nSexos femininos : \n ");
        break;
    case 'M':
        printf("\nSexos Masculinos : \n");
        break;

    default:
        break;
    }

    int contagem = 0;
    for (int i = 0; i <= TamanhoVetor; i++)
    {
        if (p1[i].sexo == Sexo)
        {
            printf("\n\tNome : %s ", p1[i].nome);
            contagem++;
        }
    }
    printf("\n\tTotal : %d ", contagem);
}
