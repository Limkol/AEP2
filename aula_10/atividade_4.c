#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

int lerFuncionarios(Funcionario vet[], int n) {
    for (int i = 0; i < n ; i++) {
        getchar();
        printf ("\n---Cadastro do funcionario %d---\n", i + 1);
        printf("Nome:");
        fgets(vet[i].nome, 50, stdin);
        
        printf("Cargo:");
        fgets(vet[i].cargo, 30, stdin);

        printf("Salario:");
        scanf("%f", &vet[i]. salario);
    }
} 

int exibirFuncionarios(Funcionario vet[], int n) {
    printf("\n---Lista de Funcionarios---\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s", vet[i].nome);
        printf("Cargo: %s", vet[i].cargo);
        printf("Salario: R$ %.2f\n", vet[i].salario);
    }
}

float calcularMedia(Funcionario vet[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + vet[i].salario;
    }
    return soma / n;
}

int indiceMaiorSalario(Funcionario vet[], int n) {
    int indice = 0;
    float maior = vet[0].salario;
    for (int i = 1; i < n; i++) {
        if (vet[i].salario > maior) {
            maior = vet[i].salario;
            indice = i;
        }
    }
    return indice;
}

int ordenarPorNome(Funcionario vet[], int n) {
    Funcionario temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(vet[i].nome, vet[j].nome) > 0) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    int indice;
    float media;
    Funcionario funcionarios[50];

    printf("Quantos funcionarios deseja cadastrar (maximo 50)?:");
    scanf("%d", &n);

    lerFuncionarios(funcionarios, n);

    ordenarPorNome(funcionarios, n);

    exibirFuncionarios(funcionarios, n);

    indice = indiceMaiorSalario(funcionarios, n);

    media = calcularMedia(funcionarios, n);

    printf("\n---Estatisticas---\n");
    printf("Funcionario com maior salario: %s (R$ %.2f)\n", funcionarios[indice].nome, funcionarios[indice].salario);
    printf("Media salarial: R$ %.2f\n", media);

    return 0;
}