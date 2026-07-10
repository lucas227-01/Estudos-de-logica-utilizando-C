#include <stdio.h>

int main(){

    int distancia, combustivel, consumo;

    printf("Digite qual a diatancia que sera percorrida: ");
    scanf("%d", &distancia);

    printf("Digite quantos litros o tanque tem de combustivel: ");
    scanf("%d", &combustivel);

    consumo = distancia / combustivel;

    printf("\nDistancia: %d KM\n", distancia);
    printf("Combustivel: %d L\n", combustivel);
    printf("Consumo medio: %d KM/L\n", consumo);

    return 0;
}