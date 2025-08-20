// Jogo de pedra, papel e tesoura

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int computador = (rand() % 3 + 1);
    int usuario;
    printf("Escolha um número\n 1 para Pedra\n 2 para Papel\n 3 para Tesoura\n");
    scanf("%d", &usuario);
    printf("Computador %d\n", computador);
    if (usuario == 1 && computador == 3 ||
         usuario == 2 && computador == 1 || 
         usuario == 3 && computador == 2) {
        printf("Usuario venceu\n");
    }
    else if (usuario == computador) {
        printf("Empate\n");
    }
    else {
        printf("Usuario perdeu\n");
    }
    return 0;
}