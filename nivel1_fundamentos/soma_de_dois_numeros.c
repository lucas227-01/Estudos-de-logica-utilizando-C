#include <stdio.h>

int main(){

    int a, b;
    int soma;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    soma = a + b;

    printf("%d + %d = %d", a, b, soma);



    return 0;
}