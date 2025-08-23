#include <stdio.h>

int main() {
    int taxa, qtd_5_Selo, qtd_3_Selo;
    printf ("Taxa para correspondência: ");
    scanf ("%d", &taxa);
    if (taxa % 5 == 0 || taxa % 5 == 3) {
        qtd_5_Selo = taxa / 5;
        qtd_3_Selo = taxa % 5 / 3;
    } else if (taxa % 5 == 1) {
        qtd_5_Selo = (taxa - 6) / 5;
        qtd_3_Selo = 2;
    } else if (taxa % 5 == 2) {
        qtd_5_Selo = (taxa - 12) / 5;
        qtd_3_Selo = 4;
    } else{
        qtd_5_Selo = (taxa - 9) / 5;
        qtd_3_Selo = 3;
    } 
    printf("%d centavos: %d selos de 3 centavos e %d selos de 5 centavos.\n", taxa, qtd_3_Selo, qtd_5_Selo);
    return 0;
}