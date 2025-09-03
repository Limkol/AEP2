#include <stdio.h>
#define TAMANHO_VETOR 7

int modificaVetor(int vetor[], int n) {
    int qtde = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] >= 10 && vetor[i] <= 20) {
            vetor[i] = 0;
            qtde++;
        }
    }
    return qtde;
}

int main() {
    int numeros[TAMANHO_VETOR];

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("VALOR[%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    int totalModificacoes = modificaVetor(numeros, TAMANHO_VETOR);

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    printf("Total de modificações: %d\n", totalModificacoes);

    return 0;

}