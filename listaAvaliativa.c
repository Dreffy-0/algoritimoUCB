#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
//* questão 1
    /* int x;
    float fX;
    printf("Escreva o valor de x: ");
    scanf("%d", &x);
    float p1 = (5 * x) + 3;
    float p2 = sqrt(pow(x , 2) - 16);
    if(x > 4 || x < -4) {
        fX = p1 / p2;
        printf("O valor de f(x) eh %.2f", fX);
    }else{
        printf("raiz quadrada de ((%d ^ 2) - 16) nao eh um valor valido, logo a funcao nao eh real", x);
    } */

//* questão 2
    /*  
    float alturaChico, alturaZe;
    alturaChico = 1.50;
    alturaZe = 1.10;
    int anos = 0;
    do{
        anos++;
        alturaChico += 0.02;
        alturaZe += 0.03;
//? printf("\naltura Chico: %.2f; altura Ze: %.2f; %d", alturaChico, alturaZe, anos);
    }while(alturaChico >= alturaZe);
    printf("Para Ze ser maior que Chico sao necessarios %d anos", anos); 
    */

//* questão 3
    /* int A, B, C;
    printf("Digite o valor dos lados do triangulo: ");
    printf("\nValor do lado A: ");
    scanf("%d", &A);
    printf("\nValor do lado B: ");
    scanf("%d", &B);
    printf("\nValor do lado C: ");
    scanf("%d", &C);
    if(A < B + C && B < A + C && C < A + B){
        if(A != B && A != C && B != C){
            printf("Eh um triangulo escaleno!");
        } else if (A == B && A == C && B == C){
            printf("Eh um triangulo equilatero!");
        } else {
            printf("Eh um triangulo isosceles");
        }

    } else {
        printf("\nNao eh um triangulo!");
        printf("\nPara existir um triangulo cada lado deve ser menor que a soma dos outros dois.");
    } */

//* questão 4
    int a, b, c;
    printf("Digite o valor dos lados do triangulo: ");
    printf("\nValor do lado a: ");
    scanf("%d", &a);
    printf("\nValor do lado b: ");
    scanf("%d", &b);
    printf("\nValor do lado c: ");
    scanf("%d", &c);
    if(a < b + c && b < a + c && c < a + b){

    } else {
        printf("\nNao eh um triangulo!");
        printf("\nPara existir um triangulo cada lado deve ser menor que a soma dos outros dois.");
    }
}