#include <stdio.h>

#define TAM 10
#define NAVIO_TAM 3

int main() {
    int tabuleiro[TAM][TAM];

    // 1. Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // -----------------------------------------
    // 2. POSICIONAMENTO DOS NAVIOS
    // Navio 1: Horizontal
    // Navio 2: Vertical
    //
    // Aqui definimos manualmente as coordenadas
    // -----------------------------------------

    // Coordenadas iniciais dos navios
    int navioH[2] = {2, 3};  // linha 2, coluna 3
    int navioV[2] = {5, 7};  // linha 5, coluna 7

    // Validação dos limites (simples)
    if (navioH[1] + NAVIO_TAM > TAM) {
        printf("Erro: navio horizontal ultrapassa o limite do tabuleiro.\n");
        return 1;
    }

    if (navioV[0] + NAVIO_TAM > TAM) {
        printf("Erro: navio vertical ultrapassa o limite do tabuleiro.\n");
        return 1;
    }

    // Verifica sobreposição
    for (int i = 0; i < NAVIO_TAM; i++) {
        if (tabuleiro[navioH[0]][navioH[1] + i] != 0 ||
            tabuleiro[navioV[0] + i][navioV[1]] != 0) {
            printf("Erro: sobreposição de navios detectada.\n");
            return 1;
        }
    }

    // Posiciona navio horizontal (3 partes -> valor 3)
    for (int i = 0; i < NAVIO_TAM; i++) {
        tabuleiro[navioH[0]][navioH[1] + i] = 3;
    }

    // Posiciona navio vertical (3 partes -> valor 3)
    for (int i = 0; i < NAVIO_TAM; i++) {
        tabuleiro[navioV[0] + i][navioV[1]] = 3;
    }

    // -----------------------------------------
    // 3. EXIBE O TABULEIRO
    // -----------------------------------------
    printf("\n=== TABULEIRO DE BATALHA NAVAL ===\n\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
