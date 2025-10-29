#include <stdio.h>

// Função recursiva para converter e exibir o número em binário
void exibirBinario(int n) {
    if (n > 1) {
        exibirBinario(n / 2); // chamada recursiva com o quociente
    }
    printf("%d", n % 2); // imprime o resto (bit atual)
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido! Digite um número positivo.\n");
        return 1;
    }

    printf("Representação binária de %d: ", numero);
    exibirBinario(numero);
    printf("\n");

    return 0;
}
