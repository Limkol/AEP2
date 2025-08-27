#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int cont = 1; cont <= expoente; cont++) {
        resultado *= base;
    }
    return resultado;    
}

int main() {
    int base, expoente;
    printf("Base: ");
    scanf("%d", &base);
    printf("Expoente: ");
    scanf("%d", &expoente);

    int pot = potencia(base, expoente);
    printf("Resultado: %d\n", pot);
}