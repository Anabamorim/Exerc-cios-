#include <stdio.h>

int main()
{
    /* Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.*/

    // variáveis
    float reais, cotacaoDolar, valorDolar;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacaoDolar);

    valorDolar = reais / cotacaoDolar;

    printf("O valor em dólar é: %.2f\n", valorDolar);

}
