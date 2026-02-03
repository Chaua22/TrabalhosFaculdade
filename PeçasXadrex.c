#include <stdio.h>

int main() {
    // Quantidade de casas para movimentação de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===== TORRE =====
    // Movimento: linha reta (horizontal ou vertical)
    // Estrutura: for
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direcao: Direita (%d)\n", i); // Torre se move 5 casas para a direita
    }

    printf("\n");

    // ===== BISPO =====
    // Movimento: diagonal (exemplo: cima e direita)
    // Estrutura: while
    printf("=== Movimento do BISPO ===\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Direcao: Cima Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    // ===== RAINHA =====
    // Movimento: todas as direções (exemplo: esquerda)
    // Estrutura: do-while
    printf("=== Movimento da RAINHA ===\n");
    int j = 1;
    do {
        printf("Direcao: Esquerda (%d)\n", j); // Rainha se move 8 casas para a esquerda
        j++;
    } while (j <= casasRainha);

    printf("\nSimulacao concluida!\n");

    return 0;
}
