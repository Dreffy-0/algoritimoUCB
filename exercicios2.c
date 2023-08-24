#include <stdio.h>


int main(){

// exercicios 1

/* int idade = 0;
char nome[40];

printf("Digite o seu nome: ");
fgets(nome, 40, stdin);
fflush(stdin);

printf("Digite a sua idade: ");
scanf("%i", &idade);
fflush(stdin);

if(idade >= 18){
    printf("%s, ja e maior de idade", nome);
    printf("Voce tem %i anos", idade);
}else{
    printf("%s, ainda e menor de idade", nome);
    printf("Voce tem %i anos", idade);
}
return 0; */

// exercicio 2

/* float salario, minimo;

printf("Digite o salario minimo atual: ");
scanf("%f", &minimo);

printf("Digite o seu salario: ");
scanf("%f", &salario);

float diferenca;

if(salario > minimo){
    diferenca = (salario - minimo);
    printf("Voce ganha %.2f, %.2f a mais que o salario minimo", salario, diferenca);

}
else if(salario < minimo){
    diferenca = (minimo - salario);
    printf("Voce ganha %.2f, %.2f menos que o salario minimo", salario, diferenca);
}else{
    printf("Voce ganha %.2f, o mesmo que o salario minimo", salario);
} */

// exercicio 3

/* float altura;
char nome[40];

printf("Digite o seu nome:");
fgets(nome, 40, stdin);

printf("Digite a sua altura em metros (exemplo: 1.80):");
scanf("%f", &altura);

float base = 1.80;

if(altura > base){
    printf("Olá %s", nome);
    printf("Sua altura e %.2f, mais alto que 1.80 metros", altura);
}else if(altura < base){
    printf("Olá %s", nome);
    printf("Sua altura e %.2f, menor que 1.80 metros", altura);
}else{
    printf("Olá %s", nome);
    printf("Sua altura e exatamente 1.80 metros");
}
return 0; */

// exercicio 4

/* float peso;

printf("Digite seu peso: ");
scanf("%f", &peso);

if(peso > 60){
    printf("Voce pesa mais que 60kg");
}else if(peso < 60){
    printf("Voce pesa menos que 60kg");
}else{
    printf("Voce pesa exatamente 60kg");
}
 */

// exercicio 5

float a = (10 % 5 * 2);
float b = (5 * 2 + 1);


if(a != b){
    printf("verdadeiro");
}else{
    printf("falso");
}


/*
Avalie a relação abaixo:
10 % 5 * 2 <> 5 * 2 + 1
resultado verdadeiro ou falso
 */

}
