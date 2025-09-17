#include <stdio.h>
#define LINHAS  (4)
#define COLUNAS (4)

void popula_matriz(int linhas, int colunas, int m[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void imprime_matriz(int linhas, int colunas, int m[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int traco_matriz(int linhas, int colunas, int m[linhas][colunas]) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        soma += m[i][i]; // soma = soma + m[i][i];
    }
    return soma;
}

int main() {
    // declara a matriz
    int matriz[LINHAS][COLUNAS];
    popula_matriz(LINHAS, COLUNAS, matriz);
    imprime_matriz(LINHAS, COLUNAS, matriz);
    int traco = traco_matriz(LINHAS, COLUNAS, matriz);
    printf("Traço da matriz = %d\n", traco);
    return 0;
}