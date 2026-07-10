#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Digite a temperatura: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Conversao para Fahrenheit: %.2f", fahrenheit);

    return 0;
}