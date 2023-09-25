#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
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
	/*
		int A, B, C;
		printf("Digite o valor dos lados do triangulo: ");
		printf("\nValor do lado A: ");
		scanf("%d", &A);
		printf("\nValor do lado B: ");
		scanf("%d", &B);
		printf("\nValor do lado C: ");
		scanf("%d", &C);
		if(A < B + C && B < A + C && C < A + B){
			printf("Eh um triangulo\n");
			if((pow(A, 2) == pow(B, 2) + pow(C,2)) | (pow(B, 2) == pow(A, 2) + pow(C,2)) | (pow(C, 2) == pow(A, 2) + pow(B,2))){
				printf("Eh um triangulo Retangulo");
			} else if((pow(A, 2) > pow(B, 2) + pow(C, 2)) | (pow(B, 2) > pow(A, 2) + pow(C, 2)) | (pow(C, 2) > pow(A, 2) + pow(B, 2))){
				printf("Eh um triangulo Obtusangulo");
			} else if((pow(A, 2) < pow(B, 2) + pow(C, 2)) | (pow(B, 2) < pow(A, 2) + pow(C, 2)) | (pow(C, 2) < pow(A, 2) + pow(B, 2))) {
				printf("Eh um triangulo Acutangulo");
			}

		} else {
			printf("\nNao eh um triangulo!");
			printf("\nPara existir um triangulo cada lado deve ser menor que a soma dos outros dois.");
		}
	*/
	//* Questão 5
	/*
	float x1, x2, y1, y2, primeiraParte, distancia;
	printf("Digite os valores x e y de p1, separado por um espaco em branco, do plano cartesiano:\n");
	scanf("%f %f", &x1, &y1);
	printf("Digite os valores x e y de p2, separado por um espaco em branco, do plano cartesiano:\n");
	scanf("%f %f", &x2, &y2);

	primeiraParte = pow((x2 - x1), 2) + pow((y2 - y1), 2);
	if(primeiraParte >= 0){
	distancia = sqrt(primeiraParte);
	printf("A distancia entre os pontos eh %.4f", distancia);
	} else {
		printf("Valores resultam em uma raiz invalida");
	}
	*/

	//* questão 6
	/*
	float x, y;
	printf("Digite o valor de x do ponto do plano cartesiano com uma casa decimal: (Exemplo: 1.0)\n");
	scanf("%f", &x);
	printf("Digite o valor de y do ponto do plano cartesiano com uma casa decimal: (Exemplo: 1.0)\n");
	scanf("%f", &y);

	if(x == 0 && y == 0){
		printf("Origem");
	} else if(x == 0) {
		printf("Eixo X");
	} else if(y == 0) {
		printf("Eixo Y");
	} else {
		printf("Ponto(%.1f, %.1f)", x, y);
	}
	*/

	//* Questão 7
	/*
		const int numAlunos = 30;
		double notas[numAlunos];
		double mediaGeral = 0.0;

		for(int i = 0; i < numAlunos; i++){
			double n1, n2, n3;
			printf("Digite as notas do aluno %d (n1 n2 n3)",  i + 1);
			scanf("%lf %lf %lf", &n1, &n2, &n3);

			double mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
			notas[i] = mediaPonderada;

			printf("Média ponderada do aluno %d: %.2lf\n", i + 1, mediaPonderada);

			if(mediaPonderada >= 7.0) {
				printf("Aprovado!\n");
			} else {
				printf("Reprovado!\n");
			}

			mediaGeral += mediaPonderada;
		}
		mediaGeral /= numAlunos;
		printf("Media geral da turma: %.2lf\n", mediaGeral);
		*/
}
