#include <stdio.h>

int main(){

    int idade;
    int meses = 12;
    int dias = 365;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int convMeses = idade * meses;
    int convDias = idade * dias;

    printf("Idade: %d\n", idade);
    printf("Meses: %d\n", convMeses);
    printf("Dias: %d\n", convDias);

    return 0;
}