#include<stdio.h>


main(){


    //variaveis 

    float salarioAtual, porcentagemReajuste, novoSalario, rejusteFinal;

    printf("Digite o salario atual");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de resjuste");
    scanf("%f", &porcentagemReajuste);
    
    reajusteFinal = porcentagemReajuste/100;

    //calcular o novo salario
    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf("Novo salrio: R$%.2f", novoSalario);
    


}