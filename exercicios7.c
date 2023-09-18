#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    // exercicio 1
    /*     int n;
        printf("Digite um numero positivo e natural\n");
        scanf("%d", &n);
        int i = 0;

        while (n >= i)
        {
            printf("\n%d", i);
            i++;
        }
         */

    // exercicio 2
    /*
         int n;
        printf("Digite um numero positivo e natural\n");
        scanf("%d", &n);

        while (n >= 0)
        {
            printf("\n%d", n);
            n--;
        }
         */

    // exercicio 3
    //? Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).
    /* int num;
    printf("Digite um numero");
    scanf("%d", &num);

        for(int c = 1; c <= num; c+=2){
            printf("\n%d", c);
        }
    */

    // exercicio 4
    /*     int i, mult;
        i = 1;
        mult = 0;
        while(i > 0){
            if(i % 3 == 0){
                printf("\nO numero %d e um multiplo de 3", i);
                mult++;
            }
            if(mult == 5){
                break;
            }
            i++;
        } */

    // exercicio 5

    /*     int i, pares, soma;
        i = 1;
        pares = 0;
        soma = 0;
        while (i > 0)
        {
            if (i % 2 == 0)
            {
                printf("\nO numero %d e par", i);
                soma += i;
                pares++;
            }
            if (pares == 50)
            {
                printf("\nA soma de todos os numeros pares e %d", soma);
                break;
            }
            i++;
        } */

    // exercicio 6
    /*
    int cod, quantidade, resposta;
    float preco, precoItem, total;
    printf("-----------------------------------------------------------------------------");
    printf("\n\t\tFrutas disponiveis:");
    printf("\n\tCODIGO\t| \t-FRUTA-\t| \t -PRECO/unidade-");
    printf("\n\t1\t| \tABACAXI\t| \t R$5,00");
    printf("\n\t2\t| \tMACA\t| \t R$1,00");
    printf("\n\t3\t| \tPERA\t| \t R$4,00");
    printf("\n\t\tFIM CATALOGO");
    printf("\n-----------------------------------------------------------------------------");
    do
    {
        printf("Digite o codigo da fruta desejada: ");
        scanf("%d", &cod);
        switch (cod)
        {
        case 1:
            precoItem = 5.00;
            printf("\nQuantos abacaxis deseja?");
            scanf("%d", &quantidade);
            if (quantidade == 1)
            {
                preco = precoItem;
            }
            else if (quantidade > 1)
            {
                preco = precoItem * quantidade;
            }
            else
            {
                printf("\nValor inválido, a quantidade tem que ser no minimo 1");
                scanf("%d", quantidade);
            }
            total += preco;

            break;

        case 2:
            precoItem = 1.00;
            printf("\nQuantas macas deseja?");
            scanf("%d", &quantidade);
            if (quantidade == 1)
            {
                preco = precoItem;
            }
            else if (quantidade > 1)
            {
                preco = precoItem * quantidade;
            }
            else
            {
                printf("\nValor inválido, a quantidade tem que ser no minimo 1");
                scanf("%d", quantidade);
            }
            total += preco;
            break;

        case 3:
            precoItem = 4.00;
            printf("\nQuantas peras deseja?");
            scanf("%d", &quantidade);
            if (quantidade == 1)
            {
                preco = precoItem;
            }
            else if (quantidade > 1)
            {
                preco = precoItem * quantidade;
            }
            else
            {
                printf("\nValor inválido, a quantidade tem que ser no minimo 1");
                scanf("%d", quantidade);
            }
            total += preco;
            break;

        default:
            printf("\nCodigo inexistente, retorne um codigo conforme a tabela");
            break;
        }
        printf("\nDeseja comprar mais alguma fruta? Digite 1 para sim e 0 para nao: ");
        scanf("%d", &resposta);
        if(resposta == 0){
            printf("O valor total da compra e: %.2f", total);
        }
    } while (resposta == 1);
    */

    // exercicio 7
    float porcentagemPerfil;
    int idade, contPorcentagem, cont;
    char sexo[8], corOlhos[8], corCabelos[8];
    cont = 0;
    contPorcentagem = 0;

    do
    {
        cont ++;
        printf("\t-------------------------TABELA INFORMACOES----------------------------\n");
        printf("SEXO: \t MASCULINO => m \t FEMININO => f\n");
        printf("----------------------------------------------------------------------\n");
        printf("COR DOS OLHOS: \t AZUIS => a \t VERDES => v \t CASTANHOS => c \t PRETOS => p\n");
        printf("----------------------------------------------------------------------\n");
        printf("COR DO CABELO: \t LOIROS => l \t CASTANHOS => c \t PRETOS => p \t RUIVOS => r\n");
        printf("----------------------------------------------------------------------\n");
        printf("IDADE: \t valor entre 10 e 100 anos\n");
        printf("----------------------------------------------------------------------\n");
        printf("SALARIO: \t valores positivos\n");
        printf("----------------------------------------------------------------------\n");
        printf("PARA SINALIZAR FIM DA PESQUISA NO CAMPO DE IDADE DIGITE -1\n");
        printf("\t----------------------------------------------------------------------\n");

        printf("Informe o sexo do habitante: \n");
        scanf("%s", sexo);
        printf("Informe a cor dos olhos do habitante: \n");
        scanf("%s", corOlhos);
        printf("Informe a cor do cabelo do habitante: \n");
        scanf("%s", corCabelos);
        printf("Informe a idade do habitante: \n");
        scanf("%d", &idade);
        if((strcmp(sexo, "f") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp(corOlhos, "c") == 0) && (strcmp(corCabelos, "c") == 0)){
            contPorcentagem++;
        }
    } while (idade != -1);
    porcentagemPerfil = (contPorcentagem/cont) * 100;
    printf("A porcentagem de habitantes do sexo feminino, idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos eh %.2f\n", porcentagemPerfil);
}
