#include <stdio.h>

int exibirBinario(int n) {
    if (n > 1) {
        exibirBinario(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Representação binária de %d: ", numero);
    exibirBinario(numero);
    printf("\n");

    return 0;
}
