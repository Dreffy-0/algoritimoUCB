#include <stdio.h>

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
    /* int n;
    printf("Digite um numero positivo e natural\n");
    scanf("%d", &n); */

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
    int cod;
    float total;
    printf("-----------------------------------------------------------------------------");
    printf("\n\t\tFrutas disponiveis:");
    printf("\n\tCODIGO\t| \t-FRUTA-\t| \t -PRECO/unidade-");
    printf("\n\t1\t| \tABACAXI\t| \t R$5,00");
    printf("\n\t2\t| \tMACA\t| \t R$1,00");
    printf("\n\t3\t| \tPERA\t| \t R$4,00");
    printf("\n\t\tFIM CATALOGO");
    printf("\n-----------------------------------------------------------------------------");
}