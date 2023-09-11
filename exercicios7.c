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
    int n;
    printf("Digite um numero positivo e natural\n");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        int cont = 1;
        if(cont != 5 && n % 3 == 0){
            cont++;
            printf("\n%d", i);
        }
    }
    
    
}