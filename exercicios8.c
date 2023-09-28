#include <stdio.h>

int main()
{
    //* exercicio 1
    /*
        int capacidade = 100;
        int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, maiorIdadeOtimo = 0, maiorIdadeRuim = 0, maiorIdadePessimo;
        int idade;
        float somaIdadeRuim;
        char opiniao;

        for(int i = 0; i < capacidade; i++){
            printf("Espectador %d\n", i+1);
            printf("Informe a idade: ");
            scanf("%d", &idade);

            printf("\n\t--- Tabela de Notas ---");
            printf("\nNota    Significado");
            printf("\nA    Otimo");
            printf("\nB    Bom");
            printf("\nC    Regular");
            printf("\nD    Ruim");
            printf("\nE    Pessimo");
            printf("\n\t----------------------");

            printf("\nInforme a nota, conforme a tabela acima: ");
            scanf(" %c", &opiniao);
            switch (opiniao)
            {
            case 'A':
                otimo++;
                if(idade > maiorIdadeOtimo){
                    maiorIdadeOtimo = idade;
                }
                break;

            case 'B':
                bom++;
                break;

            case 'C':
                regular++;
                break;

            case 'D':
                ruim++;
                somaIdadeRuim += idade;
                if(idade > maiorIdadeRuim){
                    maiorIdadeRuim = idade;
                }
                break;

            case 'E':
                pessimo++;
                if(idade > maiorIdadePessimo){
                    maiorIdadePessimo = idade;
                }
                break;

            default:
                printf("Resposta invalida, tente novamente.\n");
                i--;
            }
        }
        float percentualBomRegular = ((bom - regular) / capacidade) * 100;
        float mediaIdadeRuim = somaIdadeRuim / ruim;
        float percentualPessimo = (pessimo / capacidade) * 100;
        int diferencaMaiorIdade = maiorIdadeOtimo - maiorIdadeRuim;

        printf("\nQuantidade de notas 'Otimo': %d\n", otimo);
        printf("Diferenca percentual entre notas 'Bom' e 'Regular': %.2f%%\n", percentualBomRegular);
        printf("Media de idade das pessoas que responderam 'Ruim': %.2f\n", mediaIdadeRuim);
        printf("Percentual de notas 'Pessimo': %.2f%%\n", percentualPessimo);
        printf("Diferenca de idade entre a maior idade que respondeu 'Otimo' e que respondeu 'Ruim': %d\n", diferencaMaiorIdade);
    */

    //* exercicio 2
    /* int frequenciaElevadorA = 0, frequenciaElevadorB = 0, frequenciaElevadorC = 0;
    int periodoMatutino = 0, periodoVespertino = 0, periodoNoturno = 0;
    int totalUsuarios = 0;
    char elevadorMaisFrequentado, periodoMaisMovimentado, periodoMenosMovimentado;
    int frequenciaElevadorMaisUsado, frequenciaPeriodoMaisMovimentado, frequenciaPeriodoMenosMovimentado;

    for (int i = 0; i < 50; i++)
    {
        char elevador;
        char periodo;

        printf("Resposta do morador %d: \n", i + 1);
        printf("Elevador mais frequentado (A/B/C): ");
        scanf(" %c", &elevador);

        printf("Periodo de uso (M/V/N): ");
        scanf(" %c", &periodo);

        if (elevador == 'A')
        {
            frequenciaElevadorA++;
        } else if (elevador == 'B') {
            frequenciaElevadorB++;
        } else if (elevador == 'C') {
            frequenciaElevadorC++;
        }

        if (periodo == 'M')
        {
            periodoMatutino++;
        } else if (periodo == 'V'){
            periodoVespertino++;
        } else if (periodo == 'N'){
            periodoNoturno++;
        }

        totalUsuarios++;
    }


    //? Elevador mais usado
    elevadorMaisFrequentado = 'A';
    frequenciaElevadorMaisUsado = frequenciaElevadorA;
    if (frequenciaElevadorB > frequenciaElevadorMaisUsado)
    {
        elevadorMaisFrequentado = 'B';
        frequenciaElevadorMaisUsado = frequenciaElevadorB;
    } else if (frequenciaElevadorC > frequenciaElevadorMaisUsado)
    {
        elevadorMaisFrequentado = 'C';
        frequenciaElevadorMaisUsado = frequenciaElevadorC;
    }

    //?Periodo mais movimentado
    periodoMaisMovimentado = 'M';
    frequenciaPeriodoMaisMovimentado = periodoMatutino;
    if(periodoVespertino > frequenciaPeriodoMaisMovimentado){
        periodoMaisMovimentado = 'V';
        frequenciaPeriodoMaisMovimentado = periodoVespertino;
    } else if(periodoNoturno > frequenciaPeriodoMaisMovimentado){
        periodoMaisMovimentado = 'N';
        frequenciaPeriodoMaisMovimentado = periodoNoturno;
    }

    //?Periodo menos movimentado
    periodoMenosMovimentado = 'M';
    frequenciaPeriodoMenosMovimentado = periodoMatutino;
    if(periodoVespertino < frequenciaPeriodoMenosMovimentado){
        periodoMaisMovimentado = 'V';
        frequenciaPeriodoMenosMovimentado = periodoVespertino;
    } else if(periodoNoturno < frequenciaPeriodoMenosMovimentado){
        periodoMaisMovimentado = 'N';
        frequenciaPeriodoMenosMovimentado = periodoNoturno;
    }

    float percentualDiferenca = ((float)frequenciaPeriodoMaisMovimentado - (float)frequenciaPeriodoMenosMovimentado) / (float)frequenciaPeriodoMenosMovimentado * 100.0;
    int frequenciaMedia = (frequenciaElevadorA + frequenciaElevadorB + frequenciaElevadorC) / 3;
    float percentagemMedia = ((float)frequenciaMedia / (float)totalUsuarios) * 100.0;

    printf("\nResultados:\n");
    printf("1. Elevador mais frequentado: %c\n", elevadorMaisFrequentado);
    printf("   Periodo mais usado: %c\n", periodoMaisMovimentado);
    printf("2. Diferença percentual entre periodo o mais movimentado e o menos movimentado: %.2f%%\n", percentualDiferenca);
    printf("3. Percentagem sobre o total de servicos prestados do elevador de media utilizacao: %.2f%%\n", percentagemMedia);
    */

    //* exercicio 3
    /*
    int n;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Por favor, digite um numero nao negativo.\n");
    }
    else
    {
        int a = 0, b = 1, resultado;

        if (n == 0)
        {
            resultado = a;
        }
        else if (n == 1)
        {
            resultado = b;
        }
        else
        {
            for (int i = 2; i <= n; i++)
            {
                resultado = a + b;
                a = b;
                b = resultado;
            }
        }

        printf("O %dº termo da sequencia de Fibonacci eh: %d\n", n, resultado);
    }
    */

    //* exercicio 4
    /*
    int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Por favor, digite um numero positivo.\n");
    }
    else
    {
        printf("Os divisores do numero %d sao: ", numero);

        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                printf("%d", i);

                if (i != numero)
                {
                    printf(", ");
                }
            }
        }

        printf("\n");
    }
    */

    //* Exercicio 5
    //! FAZER DEPOIS

    //* exercicio 6
    /*
    char continuar;
    do {
        int ano, mes, dias;

        printf("Digite o ano (ex. 2023): ");
        scanf("%d", &ano);

        printf("Digite o mes (1-12): ");
        scanf("%d", &mes);

        int bissexto = ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0);

        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dias = 31;
                break;
            case 4: case 6: case 9: case 11:
                dias = 30;
                break;
            case 2:
                dias = bissexto ? 29 : 28;
                break;
            default:
                printf("Mes invalido.\n");
                continue;
        }

        printf("O mes %d/%d tem %d dias.\n", mes, ano, dias);

        printf("\nVOCÊ DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
    */

    //* exercicio 7
    int numPessoas = 10;
    int numHomens = 0, numMulheres = 0;
    float alturaTotalHomens = 0, alturaTotalMulheres = 0, alturaTotalGrupo = 0;
    float pesoTotalHomens = 0, pesoTotalMulheres = 0, pesoTotalGrupo = 0;

    for (int i = 1; i <= numPessoas; i++)
    {
        char nome[100], sexo;
        float altura, peso;

        printf("Digite o nome da pessoa #%d: ", i);
        scanf(" %[^\n]", nome);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M')
        {
            numHomens++;
            printf("Digite a altura (em metros) do homem #%d: ", i);
            scanf("%f", &altura);
            alturaTotalHomens += altura;

            printf("Digite o peso (em kg) do homem #%d: ", i);
            scanf("%f", &peso);
            pesoTotalHomens += peso;
        }
        else if (sexo == 'F')
        {
            numMulheres++;
            printf("Digite a altura (em metros) da mulher #%d: ", i);
            scanf("%f", &altura);
            alturaTotalMulheres += altura;

            printf("Digite o peso (em kg) da mulher #%d: ", i);
            scanf("%f", &peso);
            pesoTotalMulheres += peso;
        }
        else
        {
            printf("Sexo invalido. Use M/F.\n");
            i--;
            continue;
        }

        alturaTotalGrupo += altura;
        pesoTotalGrupo += peso;
    }

    // Calcular médias
    float alturaMediaHomens = (numHomens > 0) ? alturaTotalHomens / numHomens : 0;
    float alturaMediaMulheres = (numMulheres > 0) ? alturaTotalMulheres / numMulheres : 0;
    float alturaMediaGrupo = (alturaTotalGrupo) / numPessoas;
    float pesoMediaHomens = (numHomens > 0) ? pesoTotalHomens / numHomens : 0;
    float pesoMediaMulheres = (numMulheres > 0) ? pesoTotalMulheres / numMulheres : 0;
    float pesoMediaGrupo = (pesoTotalGrupo) / numPessoas;

    // Exibir estatísticas
    printf("\nEstatisticas:\n");
    printf("Numero de homens: %d\n", numHomens);
    printf("Numero de mulheres: %d\n", numMulheres);
    printf("Altura media dos homens: %.2f metros\n", alturaMediaHomens);
    printf("Altura media das mulheres: %.2f metros\n", alturaMediaMulheres);
    printf("Altura media do grupo: %.2f metros\n", alturaMediaGrupo);
    printf("Peso medio dos homens: %.2f kg\n", pesoMediaHomens);
    printf("Peso medio das mulheres: %.2f kg\n", pesoMediaMulheres);
    printf("Peso medio do grupo: %.2f kg\n", pesoMediaGrupo);
}