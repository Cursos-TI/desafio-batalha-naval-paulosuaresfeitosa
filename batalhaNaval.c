#include <stdio.h>

int main() {
    int tabuleiro[5][5];
    int i, j;
    
    // Inicializa o tabuleiro com 0 (células vazias)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posiciona o navio vertical (representado por 1):
    // Exemplo: navio vertical de 3 células, começando na linha 1 e coluna 2.
    // O navio ocupará as células (1,2), (2,2) e (3,2).
    tabuleiro[1][2] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[3][2] = 1;
    
    // Posiciona o navio horizontal (representado por 2) utilizando valores literais:
    // Exemplo: navio horizontal de 2 células, começando na linha 0 e coluna 1.
    // O navio ocupará as células (0,1) e (0,2).
    tabuleiro[0][1] = 2;
    tabuleiro[0][2] = 2;
    
    // Exibe o tabuleiro de forma visual
    printf("Tabuleiro:\n\n");
    // Imprime cabeçalho das colunas
    printf("    ");
    for (j = 0; j < 5; j++) {
        printf("%d ", j);
    }
    printf("\n");
    
    for (i = 0; i < 5; i++) {
        printf("%d:  ", i);
        for (j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 0)
                printf(". ");
            else if (tabuleiro[i][j] == 1)
                printf("V ");
            else if (tabuleiro[i][j] == 2)
                printf("H ");
        }
        printf("\n");
    }
    
    // Exibe as coordenadas de cada parte do navio vertical
    printf("\nCoordenadas do navio VERTICAL:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Celula: (%d, %d)\n", i, j);
            }
        }
    }
    
    // Exibe as coordenadas de cada parte do navio horizontal
    printf("\nCoordenadas do navio HORIZONTAL:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("Celula: (%d, %d)\n", i, j);
            }
        }
    }
    
    return 0;
}
