#include <stdio.h>

int main(){

    char name[50];

    printf("Digite seu nome completo: ");
    fgets(name, 50, stdin);

    printf("Ola, %s", name);
    printf("Seja bem vindo ao mundo da programacao");


    return 0;
}