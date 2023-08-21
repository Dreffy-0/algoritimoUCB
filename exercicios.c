#include<stdio.h>

main(){
// Exercicio 1
/* int num1, num2, soma, sub, mult, divi;

printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("\nDigite o segundo numero: ");
scanf("%d", &num2);

soma = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
divi = num1 / num2;

printf( "A soma e: %i\n", soma );
printf( "A subtracao e: %i\n", sub );
printf( "A multiplicacao e: %i \n", mult );
printf( "A divisão e: %i \n", divi ); */

//exercicio 2

/* int num, dobro;
printf("Digite um valor: ");
scanf("%i", &num);

dobro = num + num;
printf("O dobro do valor informado e: %i", dobro); */

//execicio 3

/* float area, altura, largura; 
printf("Informe a altura e a largura da sala, separe as medidas com espaco: ");
scanf("%f%f", &altura, &largura);

area = altura * largura;

printf("A area da sala e: %.2f metros quadrados", area); */

// exercicio 4

/* float cotacao, dolar, real;

printf("Informe a cotacao do dolar: ");
scanf("%f", &cotacao);

printf("Valor(R$): ");
scanf("%f", &real);

dolar = real / cotacao;

printf("Quantia em dolar: US$ %.2f\n\n", dolar); */

// exercicio 5

/* float custo, venda, frete, despesas, lucro;

printf("Digite o valor de venda da mercadoria: ");
scanf("%f", &venda);

printf("Digite o valor de custo, frete e despesas(Separe as informacoes com um espaco em branco): ");
scanf("%f%f%f", &custo, &frete, &despesas);

float valorBruto = custo + frete + despesas;
lucro = (venda - valorBruto);
int porcLucro = ( lucro / venda ) * 100;

printf("A porcentagem de lucro e: %i%%", porcLucro); */

// exercicio 6

/* float raio, area;

float pi = 3.14;

printf("Digite o raio do circulo: ");
scanf("%f", &raio);

area = pi * pow(raio, 2.0);

printf("A area do circulo é: %.2f", area); */


// exercicio 7

/* int diaN, mesN, anoN, diah, mesh, anoh;
int dia, mes, ano;
int diferenca;
diaN = 0;
diah = 0;
mesN = 0;
mesh = 0;
anoN = 0;
anoh = 0;

printf("Digite o dia, mes e ano do seu nascimento(separe as informacoes com um espaco em branco): ");
scanf("%i%i%i", &diaN, &mesN, &anoN);

printf("Digite o dia, mes e ano atual(separe as informacoes com um espaco em branco): ");
scanf("%i%i%i", &diah, &mesh, &anoh);

diferenca = (365 * anoh + 30 * mesh + diah ) - (365 * anoN + 30 * mesN + diaN);
int idadeDias = (365 * anoh + 30 * mesh + diah ) - (365 * anoN + 30 * mesN + diaN);

ano = diferenca / 365;
diferenca = diferenca % 365;

mes = diferenca / 30;
diferenca = diferenca % 30;

dia = diferenca;

printf("Tem %i ano(s), %i mes(es), %i dia(s) de vida.", ano, mes, ano);
printf("\nTem %i dias de vida.", idadeDias);
 */

// exercicio 8
/* float salario, reajuste;

printf("Informe o valor do salario atual: ");
scanf("%f", &salario);

printf("Digite o percentual de reajuste: ");
scanf("%f", &reajuste);

reajuste = (reajuste / 100);
float valorReajuste = (salario * reajuste);
salario = salario + valorReajuste;
printf("O salario depois do reajuste sera: %.2f", salario); */

// exercicio 9

/* float valor, custoFabrica, distribuidor, imposto;
distribuidor = 0.28;
imposto = 0.45;

printf("Digite o custo de fabrica do veiculo: ");
scanf("%f", &custoFabrica);

distribuidor = custoFabrica * distribuidor;
imposto = custoFabrica * imposto;

valor = custoFabrica + distribuidor + imposto;
printf("O valor do veiculo para o cliente sera: %.2f", valor);
 */

// exercicio 10


float totalVendas, salarioFixo, valorCarro, percentualVenda, salario, comissao;
int carrosVendidos;

percentualVenda = 0.05;
printf("Digite quantos carros foram vendidos pelo funcionario no mes: ");
scanf("%i", &carrosVendidos);

printf("Digite o valor recebido por venda: ");
scanf("%f", &valorCarro);

printf("Digite o valor total das vendas do funcionario: ");
scanf("%f", &totalVendas);

printf("Informe o salario do funcionario: ");
scanf("%f", &salarioFixo);

comissao = (totalVendas * percentualVenda) + (valorCarro * carrosVendidos);

salario = (salarioFixo + comissao); 

printf("O salario total do funcionario sera: %.2f", salario);

}