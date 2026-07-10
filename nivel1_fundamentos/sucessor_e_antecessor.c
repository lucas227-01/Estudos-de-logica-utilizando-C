#include <stdio.h>

int main(){

    int num, ante, suce;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    ante = num - 1;
    suce = num + 1;

    printf("\nNumero: %d\n", num);
    printf("Antecessor: %d\n", ante);
    printf("Sucessor: %d\n", suce);

    return 0;
}