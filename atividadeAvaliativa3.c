#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct No {
    Produto produto;
    struct No* proximo;
} No;

typedef struct {
    No* inicio;
} Estoque;

void inicializarEstoque(Estoque* estoque) {
    estoque->inicio = NULL;
}

void adicionarProduto(Estoque* estoque){
    Produto novoProduto;
    printf("Informe o codigo do produto: ");
    scanf("%d", &novoProduto.codigo);

    printf("Informe a descricao do produto: ");
    scanf(" %[^\n]s", &novoProduto.descricao);

    printf("Informe a quantidade do produto: ");
    scanf("%d", &novoProduto.quantidade);

    printf("Informe o valor do produto: ");
    scanf("%f", &novoProduto.valor);

    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->produto = novoProduto;
    novoNo->proximo = estoque->inicio;

    estoque->inicio = novoNo;

    printf("Produto cadastrado com sucesso!\n");
}

void relatorioProdutos(Estoque* estoque) {
    No* atual = estoque->inicio;

    printf("\nRelatorio de Produtos:\n");
    while(atual != NULL) {
        printf("Codigo: %d\n", atual->produto.codigo);
        printf("Descricao: %s\n", atual->produto.descricao);
        printf("Quantidade: %d\n", atual->produto.quantidade);
        printf("Valor: %.2f\n", atual->produto.valor);
        printf("-----------------------\n");

        atual = atual->proximo;
    }
}

void consultarProduto(Estoque* estoque) {
    int codigo;
    printf("Informe o codigo do produto a ser consultado: ");
    scanf("%d", &codigo);

    No* atual = estoque->inicio;

    while(atual != NULL) {
        if(atual->produto.codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("Codigo: %d\n", atual->produto.codigo);
            printf("Descricao: %s\n", atual->produto.descricao);
            printf("Quantidade: %d\n", atual->produto.quantidade);
            printf("Valor: %.2f\n", atual->produto.valor);
            return;
        }
        atual = atual->proximo;
    }
    printf("\nProduto nao encontrado.\n");
}

void removerProduto(Estoque* estoque) {
    int codigo;
    printf("Informe o codigo do produto a ser removido: ");
    scanf("%d", &codigo);
    
    No* atual = estoque->inicio;
    No* anterior = NULL;

    while(atual != NULL) {
        if(atual->produto.codigo == codigo){
            if(anterior == NULL) {
                estoque->inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            free(atual);
            printf("\nProduto removido com sucesso.\n");
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    printf("\nProduto nao encontrado.\n");
}

void liberarEstoque(Estoque* estoque) {
    No* atual = estoque->inicio;
    while (atual != NULL) {
        No* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    estoque->inicio = NULL;
}

int main() {
    Estoque estoque;
    int opcao;

    inicializarEstoque(&estoque);

    do {
        printf("\n1 - Adicionar Produto\n");
        printf("2 - Relatorio de Produtos\n");
        printf("3 - Consultar Produto\n");
        printf("4 - Remover Produto\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarProduto(&estoque);
                break;
            case 2:
                relatorioProdutos(&estoque);
                break;
            case 3:
                consultarProduto(&estoque);
                break;
            case 4:
                removerProduto(&estoque);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    liberarEstoque(&estoque);

    return 0;
}