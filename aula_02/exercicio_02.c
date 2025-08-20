// Cálculo de imposto de renda

#include <stdio.h>

int main() {
    double salario_bruto;
    printf("Salário bruto: ");
    scanf("%f", &salario_bruto);
    double imposto;
    if (salario_bruto <= 2000.00) {
        imposto = 0.0;
    } else if (salario_bruto <= 4000.00) {
        imposto = salario_bruto * 0.075;
    } else if (salario_bruto <= 6000.00) {
        imposto = salario_bruto * 0.15;
    } else if (salario_bruto <= 10000.00) {
        imposto = salario_bruto * 0.225;
    } else {
        imposto = salario_bruto * 0.275;
    }
    return 0
}