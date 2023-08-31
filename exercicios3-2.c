#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
// exercicio 6
/* int num;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

if(num % 2 ==0){
    printf("O numero digitado e par.");}
*/

// exercicio 7

/* float nota1, nota2, nota3;
int peso1 = 1, peso2 = 1;
int peso3 = 2;
int pesos = 4;

printf("Digite a nota da primeira prova: ");
scanf("%f", &nota1);

printf("Digite a nota da segunda prova: ");
scanf("%f", &nota2);

printf("Digite a nota da terceira prova: ");
scanf("%f", &nota3);

float mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / pesos;

if(mediaPonderada >= 7){
    printf("O aluno teve uma media %.2f, aluno aprovado", mediaPonderada);
}else{
    printf("O aluno teve uma media %.2f, aluno reprovado", mediaPonderada);
}
 */

// exercicio 8

/* int idade, tempoDeServico;

printf("Digite a sua idade: ");
scanf("%d", &idade);

printf("Digite o tempo de servico em anos: ");
scanf("%d", &tempoDeServico);

if(idade >= 65 || tempoDeServico >= 30){
    printf("Ola, o senhor ja pode se aposentar");
} else if(idade >= 60 && tempoDeServico >= 25){
    printf("Ola, o senhor ja pode se aposentar");
} else {
    printf("Ola, o senhor ainda nao pode se aposentar");
}
 */

// exercicio 9

/* float salarioFuncionario;
int tempoDeServico;
float reajuste1 = 0.25, reajuste2 = 0.20, reajuste3 = 0.15, reajuste4 = 0.10;
float bonus1 = 100, bonus2 = 200, bonus3 = 300, bonus4 = 500; 

printf("Digite o salario atual: ");
scanf("%f", &salarioFuncionario);

printf("Digite o tempo de servico em anos: ");
scanf("%d", &tempoDeServico);

if(salarioFuncionario < 500 && tempoDeServico == 0){
    salarioFuncionario += salarioFuncionario * reajuste1;
    if(salarioFuncionario > 500){
        salarioFuncionario = 500;
    }
    printf("O novo salario do funcionario e: %.2f", salarioFuncionario);
} else if(salarioFuncionario == 500 && tempoDeServico == 0){
    printf("O funcionario nao tem direito a um aumento");
} else if(salarioFuncionario < 1000 && tempoDeServico <= 3){
    salarioFuncionario = salarioFuncionario + (salarioFuncionario * reajuste2) + bonus1;
    if(salarioFuncionario > 1000){
        salarioFuncionario = 1000;
    }
    printf("O novo salario do funcionario e: %.2f", salarioFuncionario);
} else if(salarioFuncionario == 1000 && tempoDeServico <= 3){
    printf("O funcionario nao tem direito a um aumento");
} else if(salarioFuncionario < 1500 && tempoDeServico <= 6){
    salarioFuncionario = salarioFuncionario + (salarioFuncionario * reajuste3) + bonus2;
    if(salarioFuncionario > 1500){
        salarioFuncionario = 1500;
    }
    printf("O novo salario do funcionario e: %.2f", salarioFuncionario);
} else if(salarioFuncionario == 1500 && tempoDeServico <=6){
    printf("O funcionario nao tem direito a um aumento");
} else if(salarioFuncionario < 2000 && tempoDeServico <= 10){
    salarioFuncionario = salarioFuncionario + (salarioFuncionario * reajuste4) + bonus3;
    if(salarioFuncionario > 2000){
        salarioFuncionario = 2000;
    }
    printf("O novo salario do funcionario e: %.2f", salarioFuncionario);
} else if(salarioFuncionario == 2000 && tempoDeServico <=10){
    printf("O funcionario nao tem direito a um aumento");
} else {
    salarioFuncionario += bonus4;
    printf("O novo salario do funcionario e: %.2f", salarioFuncionario);
} */

// exercicio 10

float a, b, c, x1, x2, delta;

printf("calculadora de equacoes de 2 grau -----------------------------------------------");
printf("\nDigite o valor de a: ");
scanf("%f", &a);
if(a == 0){
    printf("Nao e uma equacao de 2 grau");
    abort();
}else{
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b*b - 4 * a*c;
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    if(delta < 0){
        printf("Nao existe raiz");
    } else if(delta = 0){
        printf("Raiz unica, raiz = %.2f", x1);
    } else{
        printf("Raizes sao: %.2f e %.2f", x1, x2);
    }
}



}


