#include <stdio.h>
#include <math.h>

int main()
{
	//* exercicio 1
	/*
	int vetorNum[6] = {1, 0, 5, -2, -5, 7};
	int somaValores = (vetorNum[0] + vetorNum[1] + vetorNum[5]);
	for (int i = 0; i < 6; i++)
	{
		printf("Valor do vetor na posicao %d: %d\n", i + 1, vetorNum[i]);
	}
	vetorNum[4] = 100;
	printf("\nNovos valores\n");
	for (int i = 0; i < 6; i++)
	{
		printf("Valor do vetor na posicao %d: %d\n", i + 1, vetorNum[i]);
	}
	printf("A soma dos valores do vetor na posicao 0, 1, 5 eh: %d", somaValores);
	*/

	//* exercicio 2
	/*
	int NumInteiros[6] = {1, 9, 4, 5, 3, 6};
	for(int i = 0; i < 6; i++){
	 printf("Valor do vetor na posicao %d: %d\n", i + 1, NumInteiros[i]);
	}
	*/

	//* exercicio 3
	/*
	int numReais[10], numQuadradoReais[10];
	for(int i = 0; i < 10; i++){
		printf("Digite o %d numero", i+1);
		scanf("%d", numReais[i]);
		numQuadradoReais[i] = pow(numReais[i], 2);
	}
	*/

	//* exercicio 4
	/*
	int numeros[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	int x, y, soma = 0;
	printf("Valores: \n");
	for (int i = 0; i < 8; i++) {
		printf("Valor na posicao %d: %d\n", i + 1, numeros[i]);
	}
	printf("\n");
	printf("Digite a posicao do valor x: ");
	scanf("%d", &x);
	if (x > 8 || x < 0) {
		printf("Opcao invalida!");
		printf(" Digite um valor valido: ");
		scanf("%d", &x);
	}
	x -= 1;
	x = numeros[x];
	printf("Digite a posicao do valor y: ");
	scanf("%d", &y);
	if (y > 8 || y < 0) {
		printf("Opcao invalida!");
		printf(" Digite um valor valido: ");
		scanf("%d", &y);
	}
	y -= 1;
	y = numeros[y];
	soma = x + y;
	printf("A soma dos valores %d e %d eh %d", x, y, soma);
	*/

	//* exercicio 5
	/*
	int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int numPares = 0;
	for (int i = 0; i < 10; i++) {
		if(numeros[i] % 2 == 0){
			numPares++;
			printf("\nO valor %d eh par", numeros[i]);
		}
	}
	printf("\nO vetor tem %d numeros pares", numPares);
	*/

	//* exercicio 6
	/*
	int numeros[10];
	int maiorNum = 0, menorNum;
	printf("Digite valores inteiros!!\n");
	for (int i = 0; i < 10; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%d", &numeros[i]);
		if(maiorNum < numeros[i]){
			maiorNum = numeros[i];
		}
		if(menorNum > numeros[i]){
			menorNum = numeros[i];
		}
	}
	printf("O maior valor informado eh %d\n", maiorNum);
	printf("O menor valor informado eh %d\n", menorNum);
	*/

	//* exercicio 7
	/*
	int numeros[10];
	int maiorNum = 0, posicaoMaiorNum = 0;
	printf("Digite valores inteiros!!\n");
	for (int i = 0; i < 10; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%d", &numeros[i]);
		if(maiorNum < numeros[i]){
			maiorNum = numeros[i];
			posicaoMaiorNum = i + 1;
		}
	}
	printf("O maior valor informado eh %d e esta na posicao #%d\n", maiorNum, posicaoMaiorNum);
	*/

	//* exercicio 8
	/*
	int numeros[6];
	for (int i = 0; i < 6; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	printf("Os valores informados mostrados na ordem inversa a inserida eh: \n");
	for (int i = 5; i > -1; i--)	{
		printf("Numero na posicao #%d: %d\n", i + 1, numeros[i]);
	}
	*/

	//* exercicio 9
	/*
	int numeros[6];
	printf("Digite valores pares!!\n");
	for (int i = 0; i < 6; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%d", &numeros[i]);
		if(numeros[i] % 2 != 0){
			printf("O valor tem que ser par!\nDigite um valor valido: ");
			scanf("%d", &numeros[i]);
		}
	}
	printf("Os valores informados mostrados na ordem inversa a inserida eh: \n");
	for (int i = 5; i > -1; i--)	{
		printf("Numero na posicao #%d: %d\n", i + 1, numeros[i]);
	}
	*/

	//* exercicio 10
	/*
	float notasAlunos[15];
	float mediaGeral = 0;
	for (int i = 0; i < 15; i++) {
		printf("Digite a nota do #%d aluno: ", i + 1);
		scanf("%f", &notasAlunos[i]);
		mediaGeral += notasAlunos[i];
	}
	mediaGeral /= 15;
	printf("A media geral dos alunos eh: %.1f", mediaGeral);
	*/

	//* exercicio 11
	/*
	float numeros[10], somaNumPositivos = 0;
	int numNegativos = 0;
	for (int i = 0; i < 10; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%f", &numeros[i]);
		if (numeros[i] < 0){
			numNegativos++;
		} else {
			somaNumPositivos += numeros[i];
		}
	}
	printf("Dentre os valores informados %d sao negativos", numNegativos);
	printf("A soma dos valores positivos informados eh: %.2f", somaNumPositivos);
	*/

	//* exercicio 12
	/* 
	int numeros[5], maiorNum = 0, menorNum;
	float media;
	for (int i = 0; i < 5; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%d", &numeros[i]);
		if(maiorNum < numeros[i]) {
			maiorNum = numeros[i];
		}
		if(menorNum > numeros[i]) {
			menorNum = numeros[i];
		}
		media += numeros[i];
	}
	media /= 5;
	printf("Valores informados: \n");
	for (int i = 0; i < 5; i++){
		printf("O valor na posicao #%d eh: %d\n", i + 1, numeros[i]);
	}
	printf("O maior valor informado eh: %d\n", maiorNum);
	printf("O menor valor informado eh: %d\n", menorNum);
	printf("A media dos valores informados eh: %.2f\n", media);
	*/

	//* exercicio 13
	int numeros[5], maiorNum = 0, posicaoMaiorNum = 0, menorNum, posicaoMenorNum = 0;
	for (int i = 0; i < 5; i++) {
		printf("Digite o #%d valor: ", i + 1);
		scanf("%d", &numeros[i]);
		if(maiorNum < numeros[i]) {
			maiorNum = numeros[i];
			posicaoMaiorNum = i;
		}
		if(menorNum > numeros[i]) {
			menorNum = numeros[i];
			posicaoMenorNum = i;
		}
	}
	printf("O maior valor informado eh %d, eh o #%d valor e esta na posicao %d do vetor\n", maiorNum, posicaoMaiorNum + 1, posicaoMaiorNum);
	printf("O menor valor informado eh %d, eh o #%d valor e esta na posicao %d do vetor\n", menorNum, posicaoMenorNum + 1, posicaoMenorNum);

}