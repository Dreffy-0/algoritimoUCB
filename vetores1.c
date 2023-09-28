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
	int numReais[10], numQuadradoReais[10];
	for(int i = 0; i < 10; i++){
		printf("Digite o %d numero", i+1);
		scanf("%d", numReais[i]);
		numQuadradoReais[i] = pow(numReais[i], 2);
	}
}