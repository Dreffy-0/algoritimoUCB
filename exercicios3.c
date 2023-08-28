#include <stdio.h>
#include <math.h>

int main()
{

    // exercicio 1

    /* double num, raiz, quadrado;

    printf("Digite o numero: ");
    scanf("%lf", &num);


    if(num>= 0){
        raiz = sqrt(num);
        printf("A raiz quadrada do numero e: %lf", raiz);
    }else{
        quadrado = pow(num, 2);
        printf("O quadraddo do numero e: %lf", quadrado);
    } */

    // exercicio 2

/*         int a, b, c, d;

        printf("Digite o primeiro numero: ");
        scanf("%d", &a);
        printf("Digite o segundo numero: ");
        scanf("%d", &b);
        printf("Digite o terceiro numero:  ");
        scanf("%d", &c);
        printf("Digite o quarto valor: ");
        scanf("%d", &d);

        if (a > b && a > c && a > d)
        {
            printf("O maior valor e A");
            if (b < c && b < d)
            {
                printf("\nO menor valor e B");
            }
            else if (c < b && c < d)
            {
                printf("\nO menor valor e C");
            }
            else
            {
                printf("\nO menor valor e D");
            }
        }
        else if (b > a && b > c && b > d)
        {
            printf("O maior valor e B");
            if (a < c && a < d)
            {
                printf("\nO menor valor e A");
            }
            else if (c < a && c < d)
            {
                printf("\nO menor valor e C");
            }
            else
            {
                printf("\nO menor valor e D");
            }
        }
        else if (c > a && c > b && c > d)
        {
            printf("O maior valor e C");
            if (a < b && a < d)
            {
                printf("\nO menor valor e A");
            }
            else if (b < a && b < d)
            {
                printf("\nO menor valor e B");
            }
            else
            {
                printf("\nO menor valor e D");
            }
        }
        else
        {
            printf("O maior valor e D");
            if (a < b && a < c)
            {
                printf("\nO menor valor e A");
            }
            else if (b < a && b < c)
            {
                printf("\nO menor valor e B");
            }
            else
            {
                printf("\nO menor valor e C");
            }
        } */

    // exercicio 3

    /*     int A, B, C;

        printf("Digite o primeiro valor: ");
        scanf("%d", &A);
        printf("Digite o segundo valor: ");
        scanf("%d", &B);
        printf("Digite o terceiro valor: ");
        scanf("%d", &C);

        if(A > B && A > C && B > C){
            printf("Os valores em ordem ascendente e C, B, A, %d %d %d", C, B, A);
        }else if(A > B && A > C && C > B){
            printf("Os valores em ordem ascendente e B, C, A, %d %d %d", B, C, A);
        }else if(B > A && B > C && A > C){
            printf("Os valores em ordem ascendente e C, A, B, %d %d %d", C, A, B);
        }else if(B > A && B > C && C > A){
            printf("Os valores em ordem ascendente e A, C. B, %d %d %d", A, C, B);
        }else if(C > A && C > B && B > A){
            printf("Os valores em ordem ascendente e A, B, C, %d %d %d", A, B, C);
        }else{
            printf("Os valores em ordem ascendente e B, A, C, %d %d %d", B, A, C);
        }
     */

/*     int A, B, C;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);
    printf("Digite o terceiro valor: ");
    scanf("%d", &C);

        if(A > B && A > C && B > C){
            printf("Os valores em ordem descendente e A, B, C, %d %d %d", A, B, C);
        }else if(A > B && A > C && C > B){
            printf("Os valores em ordem descendente e A, C, B, %d %d %d", A, C, B);
        }else if(B > A && B > C && A > C){
            printf("Os valores em ordem descendente e B, A, C, %d %d %d", B, A, C);
        }else if(B > A && B > C && C > A) {
            printf("Os valores em ordem descendente e B, C, A, %d %d %d", B, C, A);
        }else if(C > A && C > B && B > A){
            printf("Os valores em ordem descendente e C, B, A, %d %d %d", C, B, A);
        }else{
            printf("Os valores em ordem descendente e C, A, B, %d %d %d", C, A, B);
        } */

int num;

int cond1 = 5;
int cond2 = 200;
int cond3 = 400;
int x = 500;
int y = 1000;

printf("Digite o numero: ");
scanf("%d", &num);
fflush(stdin);

if(num == cond1){
    printf("O numero e igual a 5");
}else if(num == cond2){
    printf("O numero e igual a 200");
}else if(num == cond3){
    printf("O numero e igual a 400");
}else if(x>=num && num<=y){
    printf("O numero e um valor entre 500 e 1000");
}else{
    printf("O valor nao se enquadra em nenhuma das codicoes");
}

}
