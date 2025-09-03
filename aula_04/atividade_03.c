#include <stdio.h>

float calcularMediaTurma(int notas[], int qtd) {
    int soma = 0;
    float media = 0;
    for (int i = 0; i < qtd; i++) {
        soma += notas[i];
    }
    media = soma / qtd;
    return media;
} 

int imprimirResultados(int notas[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        if (notas[i] < 7.0){
            printf("Estudante %d: Reprovado\n", i+1);
        } else {
            printf("Estudante %d: Aprovado\n", i+1);
        }
    }


}

int main () {
    int qtde;
    printf ("Insira o número de estudantes: ");
    scanf ("%d", &qtde);

    int notasFinais[qtde];

    for(int i = 0; i < qtde; i++){
        printf("Nota[%d]: ", i+1);
        scanf("%d", &notasFinais[i]);
    }

    imprimirResultados(notasFinais, qtde);

    float media = calcularMediaTurma(notasFinais, qtde);

    printf("Média da turma: %.2f\n", media);

}