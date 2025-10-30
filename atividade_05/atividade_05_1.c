#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + somaDigitos(n / 10);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    int soma = somaDigitos(numero);
    printf("A soma dos dígitos de %d é: %d\n", numero, soma);

    return 0;
}
