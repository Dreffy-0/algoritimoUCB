#include <stdio.h>
#include <stdlib.h>

//! questão 1
/* int validaQuantidade() {
    int quantidade;

    do {
        printf("Informe a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            printf("Quantidade invalida. Digite um numero nao negativo. \n");
        }
        

    } while (quantidade < 0);

    return quantidade;
}

float calcularSalario(int quantidade) {
    const float salarioBase = 600.0;
    const float adicional1 = 0.5;
    const float adicional2 = 0.75;
    const int limite1 = 50;
    const int limite2 = 80;

    float salarioTotal = salarioBase;

    if(quantidade > limite1) {
        salarioTotal += (quantidade <= limite2) ? (quantidade - limite1) * adicional1 : (limite2 - limite1) * adicional1 + (quantidade - limite2) * adicional2;
    }

    return salarioTotal;
}

void mostraFinal(float salarioTotal) {
    printf("Salario total: R$%.2f\n", salarioTotal);
}

int main() {
    int quantidade;
    char continuar;

    do {
        quantidade = validaQuantidade();

        float salarioTotal = calcularSalario(quantidade);
        mostraFinal(salarioTotal);

        printf("Deseja processar outro funcionario? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');
    
    return 0;
} */

//! questão 2

char validaSexo();
float validaSalario();
void classificaSalario(float salario, char *classificacao);

int main() {
    int numAssalariados, abaixoSalarioMinimo = 0, acimaSalarioMinimo = 0;

    printf("Informe o numero de assalariados a serem pesquisados: ");
    scanf("%d", &numAssalariados);

    char *sexos = (char *)malloc(numAssalariados * sizeof(char));
    float *salarios = (float *)malloc(numAssalariados * sizeof(float));

    if(sexos == NULL || salarios == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < numAssalariados; i++) {
        sexos[i] = validaSexo();
        salarios[i] = validaSalario();
    }

    printf("\nResultados finais:\n");
    for (int i = 0; i< numAssalariados; i++) {
        printf("\nAssalariado %d: \n", i + 1);
        printf("Sexo: %s\n", (sexos[i] == 'M' || sexos[i] == 'm') ? "Masculino" : "Feminino");
        printf("Salario: R$%.2f\n", salarios[i]);

        char classificacao[50];
        classificaSalario(salarios[i], classificacao);
        printf("Classificacao: %s\n", classificacao);

        if(salarios[i] < 1400) {
            abaixoSalarioMinimo++;
        } else {
            acimaSalarioMinimo++;
        }
    }

    printf("\nTotal de assalariados abaixo do salario minimo: %d\n", abaixoSalarioMinimo);
    printf("Total de assalariados acima do salario minimo: %d\n", acimaSalarioMinimo);

    free(sexos);
    free(salarios);

    return 0;
}

char validaSexo() {
    char sexo;
    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
    
    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("Informe o salario (maior que R$1.00): ");
        scanf("%f", &salario);
    } while (salario <= 1.00);

    return salario;
}

void classificaSalario(float salario, char *classificacao) {
    if (salario < 1400.00) {
        sprintf(classificacao, "Abaixo do salario minimo");
    } else if (salario == 1400.00) {
        sprintf(classificacao, "Igual ao salario minimo");
    } else {
        sprintf(classificacao, "Acima do salario minimo");
    }
}