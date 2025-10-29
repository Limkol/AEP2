#include <stdio.h>

// Função recursiva que soma os dígitos de um número
int somaDigitos(int n) {
    if (n == 0) {
        return 0; // caso base: quando o número for 0
    } else {
        return (n % 10) + somaDigitos(n / 10); // soma o último dígito com o resto
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido! Digite um número positivo.\n");
        return 1;
    }

    int soma = somaDigitos(numero);
    printf("A soma dos dígitos de %d é: %d\n", numero, soma);

    return 0;
}
