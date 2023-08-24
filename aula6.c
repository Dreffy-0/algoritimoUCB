#include<stdio.h>

main(){
    char nome[50];
    int idade;
    char matricula[15];
    char endereco[100];
    char curso[50];
    int periodo;
    char diciplinas[50];
    float mensalidade;

    printf("Nome: ");
    fgets(nome, 50,stdin);
    fflush(stdin);

    printf("\nIdade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nMatricula: ");
    fgets(matricula, 15,stdin);
    fflush(stdin);

    printf("\nEndereco: ");
    fgets(endereco, 100,stdin);
    fflush(stdin);

    printf("\nCurso: ");
    fgets(curso, 50,stdin);
    fflush(stdin);

    printf("\nPeriodo: ");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDiciplinas: ");
    fgets(diciplinas, 50,stdin);
    fflush(stdin);

    printf("\nMensalidade: ");
    scanf("%f", &mensalidade);
    fflush(stdin);

    printf("\n----------------------------------------");
    printf("\tSistema de cadastro");
    printf("\n----------------------------------------");

    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereco: %s", endereco);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %i", periodo);
    printf("\nDiciplinas: %s", diciplinas);
    printf("\nMensalidade: %.2f", mensalidade);
    }
