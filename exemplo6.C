#include <stdio.h>
#include <math.h> 

int main() {

    // variáveis
    double raio, area, PI = 3.1415;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    // cálculo da área do círculo = pi * (raio * raio)
    area = PI * (raio * raio);
    area = PI * pow(raio, 2);
    
    printf("A área do círculo é %lf\n", area);

}
