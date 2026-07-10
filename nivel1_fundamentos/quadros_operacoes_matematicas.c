#include <stdio.h>

int main(){

    float soma, subtracao, multiplicacao, divisao;
    float a, b;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("%.2f + %.2f = %.2f\n", a, b, soma);
    printf("%.2f - %.2f = %.2f\n", a, b, subtracao);
    printf("%.2f x %.2f = %.2f\n", a, b, multiplicacao);
    printf("%.2f / %.2f = %.2f\n", a, b, divisao);


    return 0;
}