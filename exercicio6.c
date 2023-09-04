#include <stdio.h>

int main()
{
    // exercicio 1
    /*     int DDD;

        printf("Digite o DDD da cidade:" );
        scanf("%d", &DDD);

        switch (DDD)
        {
        case 61 :
            printf("O DDD e de Brasilia\n");
            break;

        case 71 :
            printf("O DDD e de Salvador\n");
            break;

        case 11 :
            printf("O DDD e de Sao Paulo\n");
            break;

        case 21 :
            printf("O DDD e do Rio de Janeiro\n");
            break;

        case 32 :
            printf("O DDD e de Juiz de Fora\n");
            break;

        case 19 :
            printf("O DDD e de Campinas\n");
            break;

        case 27 :
            printf("O DDD e de Vitoria\n");
            break;

        case 31 :
            printf("O DDD e de Belo Horizonte\n");
            break;

        default:
            printf("O DDD digitado e uma cidade do Brasil sem identificacao\n");
            break;
        }
        return 0; */

    // exercicio 2

    /* int codPedido, quantidadeItem;
    float precoItem, precoPedido;

    printf("Digite o codigo do pedido: ");
    scanf("%d", &codPedido);

    switch (codPedido)
    {
        case 100 :
            precoItem = 10.10;
            printf("Digite a quantidade:" );
            scanf("%d", &quantidadeItem);
            if(quantidadeItem > 1){
                precoPedido = precoItem * quantidadeItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }else{
                precoPedido = precoItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }
            break;
        case 101 :
            precoItem = 8.30;
            printf("Digite a quantidade:" );
            scanf("%d", &quantidadeItem);
            if(quantidadeItem > 1){
                precoPedido = precoItem * quantidadeItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }else{
                precoPedido = precoItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }
            break;
        case 102 :
            precoItem = 8.50;
            printf("Digite a quantidade:" );
            scanf("%d", &quantidadeItem);
            if(quantidadeItem > 1){
                precoPedido = precoItem * quantidadeItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }else{
                precoPedido = precoItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }
            break;
        case 103 :
            precoItem = 12.50;
            printf("Digite a quantidade:" );
            scanf("%d", &quantidadeItem);
            if(quantidadeItem > 1){
                precoPedido = precoItem * quantidadeItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }else{
                precoPedido = precoItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }
            break;
        case 104:
            precoItem = 13.25;
            printf("Digite a quantidade:" );
            scanf("%d", &quantidadeItem);
            if(quantidadeItem > 1){
                precoPedido = precoItem * quantidadeItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }else{
                precoPedido = precoItem;
                printf("O preco do pedido e: %.2f", precoPedido);
            }
            break;
        default :
            printf("Item inexistente");
            break;
    } */

    // exercicio 3

    int prato, sobremesa, bebida, totalCaloria = 0;

    printf("------------------------ Cardapio ---------------------------------\n");
    printf("Opcoes de prato: 1 - vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne \n");
    printf("Opcoes de sobremesa: 1 - Abacaxi, 2 - Sorvete diet, 3 - Mouse diet, 4 - Mouse chocolate\n");
    printf("Opcoes de bebida: 1 - Cha, 2 - Suco de laranja, 3 - Suco de melao, 4 - Refrigerante diet\n");
    printf("-------------------------------------------------------------------\n");

    printf("Informe o codigo do prato:");
    scanf("%d", &prato);

    switch (prato)
    {
    case 1:
        totalCaloria = 180;
        break;

    case 2:
        totalCaloria = 230;
        break;

    case 3:
        totalCaloria = 250;
        break;

    case 4:
        totalCaloria = 350;
        break;

    default:
        printf("Codigo invalido\n");
        break;
    }

    printf("Informe o codigo da sobremesa: ");
    scanf("%d", &sobremesa);

    switch (sobremesa)
    {
    case 1:
        totalCaloria += 75;
        break;

    case 2:
        totalCaloria += 110;
        break;

    case 3:
        totalCaloria += 170;
        break;

    case 4:
        totalCaloria += 200;
        break;

    default:
        printf("Codigo invalido\n");
        break;
    }

    printf("Informe o codigo da bebida: ");
    scanf("%d", &bebida);

    switch (bebida)
    {
    case 1:
        totalCaloria += 20;
        break;

    case 2:
        totalCaloria += 70;
        break;

    case 3:
        totalCaloria += 100;
        break;

    case 4:
        totalCaloria += 65;
        break;

    default:
        printf("Codigo invalido\n");
        break;
    }

    printf("O total de calorias consumidas e: %d", totalCaloria);
}