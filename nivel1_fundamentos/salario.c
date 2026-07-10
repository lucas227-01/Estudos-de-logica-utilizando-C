#include <stdio.h>

int main(){

    float valHora, horasTrab, salario;

    printf("Qual o valor da sua hora: ");
    scanf("%f", &valHora);

    printf("Quantas horas vc trabalhou esse mes: ");
    scanf("%f", &horasTrab);

    salario = valHora * horasTrab;

    printf("Salario: %.2f", salario);

    return 0;
}