#include <stdio.h>
#include <math.h>

int main(){

    float largura, altura, area, perimetro, diagonal;

    printf("Qual a largura do Retangulo: ");
    scanf("%f", &largura);

    printf("Qual a altura do Retangulo: ");
    scanf("%f", &altura);

    area = largura * altura;
    perimetro = 2 * (largura + altura);
    diagonal = sqrt((largura * largura) + (altura * altura));

    printf("\nArea: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);


    return 0;
}