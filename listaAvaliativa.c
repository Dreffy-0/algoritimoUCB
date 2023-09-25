#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//? Definindo o numero de cidades para a questão 10
#define Num_Cidades 200

//? Definindo a estrutura para armazenar os dados de cada cidade
struct Cidade
{
	int codigo;
	char estado[3];
	int veiculos;
	int acidentes;
};

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
		float notas[numAlunos];
		float mediaGeral = 0.0;

		for(int i = 0; i < numAlunos; i++){
			float n1, n2, n3;
			printf("Digite as notas do aluno %d (n1 n2 n3)",  i + 1);
			scanf("%f %f %f", &n1, &n2, &n3);

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
		printf("Media geral da turma: %.2f\n", mediaGeral);
	*/

	//* Questão 8
	/*
	int numHabitantes, numFilhos, pessoasSalariosAte100;
	float mediaSalarios, mediaFilhos, salario, maiorSalario, porcSalarariosAte100;

	numHabitantes = 0, pessoasSalariosAte100 = 0;
	mediaSalarios = 0.0, mediaFilhos = 0.0;
	maiorSalario = 0.0;
	do
	{
		printf("\nDigite o salario, caso deseje finalizar a pesquisa digite um valor negativo para o salario: \n");
		scanf("%f", &salario);
		printf("Digite o numero de filhos: \n");
		scanf("%d", &numFilhos);
		if (salario > maiorSalario)
		{
			maiorSalario = salario;
		}
		if (salario >= 0)
		{
			if (salario <= 100)
			{
				pessoasSalariosAte100++;
			}

			mediaSalarios += salario;
			mediaFilhos += numFilhos;
			numHabitantes++;
		}
	} while (salario >= 0);
	mediaSalarios /= numHabitantes;
	mediaFilhos /= numHabitantes;
	porcSalarariosAte100 = (pessoasSalariosAte100 / (float)numHabitantes) * 100;

	printf("A media do salario da populacao eh %.2f\n", mediaSalarios);
	printf("A media do numero de filhos eh %.2f\n", mediaFilhos);
	printf("O maior salario eh %.2f\n", maiorSalario);
	printf("O percentual de pessoas com salario ate 100 reais eh de %.2f%%\n", porcSalarariosAte100);
	*/

	//* questão 9
	/*
	int voto, totalVotos, votosCand1, votosCand2, votosCand3, votosCand4, totalNulo, totalEmBranco;
	totalVotos = 0, totalEmBranco = 0, totalNulo = 0, votosCand1 = 0, votosCand2 = 0, votosCand3 = 0, votosCand4 = 0;
	do
	{
		printf("\t------- Tabela de candidatos -------\n");
		printf("Candidato 1: 1 | Candidato 2: 2 | candidato 3: 3 | candidato 4: 4\n");
		printf("Voto nulo: 5 | Voto em branco: 6\n");
		printf("\t------- ------- ------- ------- ------- \n");
		printf("Digite o codigo do candidato: \n");
		scanf("%d", &voto);
		switch (voto)
		{
		case 0:
			printf("\nFim contabilizacao de votos!\n");
			break;

		case 1:
			printf("\nVoto para o canditato 1!\n");
			totalVotos++;
			votosCand1++;
			break;

		case 2:
			printf("\nVoto para o canditato 2!\n");
			totalVotos++;
			votosCand2++;
			break;

		case 3:
			printf("\nVoto para o canditato 3!\n");
			totalVotos++;
			votosCand3++;
			break;

		case 4:
			printf("\nVoto para o canditato 4!\n");
			totalVotos++;
			votosCand4++;
			break;

		case 5:
			printf("\nVoto Nulo registrado!\n");
			totalVotos++;
			totalNulo++;
			break;

		case 6:
			printf("\nVoto em branco registrado!\n");
			totalVotos++;
			totalEmBranco++;
			break;

		default:
		printf("\nCodigo inválido\n");
			break;
		}
	} while (voto != 0);
	printf("O total de votos eh: %d\n", totalVotos);
	printf("O total de votos para o candidado 1 eh: %d\n", votosCand1);
	printf("O total de votos para o candidado 2 eh: %d\n", votosCand2);
	printf("O total de votos para o candidado 3 eh: %d\n", votosCand3);
	printf("O total de votos para o candidado 4 eh: %d\n", votosCand4);
	printf("O total de votos nulo eh: %d\n", totalNulo);
	printf("O total de votos em branco eh: %d\n", totalEmBranco);
	*/

	//* questão 10
	/* 
	//? Declarando um Array de estruturas para armazenar os dados das cidades
	struct Cidade cidades[Num_Cidades];

	//? Fazendo a leitura dos dados das cidades e armazenando no no array
	for(int i = 0; i < Num_Cidades; i++){
		printf("Informe o código da cidade: ");
		scanf("%d", &cidades[i].codigo);
		printf("Informe o estado (2 letras): ");
		scanf("%s", cidades[i].estado);
		printf("Informe o numero de veiculos de passeio em 1992: ");
		scanf("%d", &cidades[i].veiculos);
		printf("Informe o numero de acidentes com vitimas em 1992: ");
		scanf("%d", &cidades[i].acidentes);
	}

	//? Criando os valores máximo e mínimo de acidentes e inicializando elas;
	int maxAcidentes = cidades[0].acidentes;
	int minAcidentes = cidades[0].acidentes;
	int indiceMaxAcidentes = 0;
	int indiceMinAcidentes = 0;

	//? Fazendo o calculo da média de veículos para todas as cidades
	int totalVeiculos = 0;
	for(int i = 0; i < Num_Cidades; i++){
		totalVeiculos += cidades[i].veiculos;

		//? Verificando dos valores máximo e mínimo de acidentes
		if(cidades[i].acidentes > maxAcidentes){
			maxAcidentes = cidades[i].acidentes;
			indiceMaxAcidentes = i;
		}
		if(cidades[i].acidentes < minAcidentes ){
			minAcidentes = cidades[i].acidentes;
			indiceMinAcidentes = i;
		}
	}
	float mediaVeiculos = (float)totalVeiculos / Num_Cidades;

	//? Inicializando as variáveis para o Estado do RS
	int totalAcidentesRS = 0;
	int numCidadesRS = 0;
	//? Fazendo os calculos da média de acidentes com vítimas no Rio Grande do Sul
	for(int i = 0; i < Num_Cidades; i++) {
		if(stricmp(cidades[i].estado, "RS") == 0){
			totalAcidentesRS += cidades[i].acidentes;
			numCidadesRS++;
		}
	}
	float mediaAcidentesRS = (float)totalAcidentesRS / numCidadesRS;

	//? Exibindo no console os resultados
	printf("Maior indice de acidentes de transito: %d na cidade de codigo %d\n", maxAcidentes, cidades[indiceMaxAcidentes].codigo);
	printf("Menor indice de acidentes de transito: %d na cidade de codigo %d\n", minAcidentes, cidades[indiceMinAcidentes].codigo);
	printf("Media de veiculos em todas as cidades: %.2f\n", mediaVeiculos);
	printf("Media de acidentes com vitimas no estado Rio Grande do Sul: %.2f\n", mediaAcidentesRS);
	*/
}