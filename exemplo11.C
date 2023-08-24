#include <stdio.h>

int main() {

    /* Calcule e escreva o salário final do vendedor */

    float numCarros, totalVendas, salarioFixo, valorPorCarro, salarioFinal, porcentagemVendas = 0.05;

    printf("Digite quantos carros vendeu: ");
    scanf("%f", &numCarros);

    printf("Digite o total das vendas: ");
    scanf("%f", &totalVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Comissão por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioFinal = salarioFixo + (valorPorCarro * numCarros) + (porcentagemVendas * totalVendas);

    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

}
