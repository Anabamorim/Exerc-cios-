#include <stdio.h>

main()
{
    /* Faça um programa em que o usuario digite o custo de uma determinada mercadoria, em seguida,
    adiciona-se ao custo o valor do frente e despesas eventuais (tambem solicitadas pelo teclado).
    Para concluir, o programa pergunta qual o valor de vendar e indica a porcentagem de luvro da mercadoria.*/

    // variavais
    float custo, frete, despesa, valorVenda, valorBruto, lucro :

    printf("Digite o curso do produto");
    scanf("%f", &custo);

    printf("Digite o frete do produto");
    scanf("%f", &despesa);

    printf("Digite a despesa do produto");
    scanf("%f", &despesa);

    // calcular o valor bruto do produto
    //  valor bruto = custo + frete = despesa

    valorBruto = custo + frete + despesa;

    // informar o valor bruto para o usuario

    printf("O valor bruto do produto e: R$%.2f. Digite o valor da venda:");
    scanf("%%f", &valorVenda);

    // calculo de lucro
    lucro = ((valorVenda - valorBruto) * 100) / valorBruto;

    // aprentacao do lucro
    printf("Sua porcentagem do lucro é: %.2f%")
}