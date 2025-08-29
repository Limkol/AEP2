#include <stdio.h>

int minutos(int hr, int min) {
    int total = hr * 60 + min;
    return total;
}

int diferenca(int n1, int n2) {
    int dif;
    if(n1 > n2) {
        dif = n1 - n2;
    } else {
        dif = n2 - n1;
    }
    return dif;
}

int main() {
    int hr1, min1, hr2, min2;

    printf("Digite o primeiro horário: ");
    scanf("%d:%d", &hr1, &min1);
    
    if(hr1 >23 || hr1 < 0) {
        printf("Horário invalido, coloque uma hora dentro do formato de 24 horas.\n");
        return 0;
    }
    if(min1 > 59 || min1 < 0) {
        printf("Horário invalido, coloque os minutos entre 0 e 59.\n");
        return 0;
    }
    
    int total1 = minutos(hr1, min1);

    printf("Digite o segundo horário: ");
    scanf("%d:%d", &hr2, &min2);
    
    if(hr2 >23 || hr2 < 0) {
        printf("Horário invalido, coloque uma hora dentro do formato de 24 horas.\n");
        return 0;
    }
    if(min2 > 59 || min2 < 0) {
        printf("Horário invalido, coloque os minutos entre 0 e 59.\n");
        return 0;
    }

    int total2 = minutos(hr2, min2);

    int dif = diferenca(total1, total2);

    printf ("A diferença em minutos entre os horários %02d:%02d e %02d:%02d é de %d minutos.\n", hr1, min1, hr2, min2, dif);
}