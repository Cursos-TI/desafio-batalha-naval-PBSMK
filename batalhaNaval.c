#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    printf("Desafio Batalha Naval\n\n");

    // Criando o tabuleiro 5x5
    int tabuleiro[10][10] = {0};

    // Posicionando um navio horizontal (3 partes)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Posicionando um navio vertical (3 partes)
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;

    printf("Nível Novato - Tabuleiro com navios:\n");
    exibirTabuleiro(tabuleiro, 5);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    printf("Nível Aventureiro - Tabuleiro 10x10 com mais navios:\n");

    // Expandir o tabuleiro (já inicializado como 10x10)
    // Adicionar mais dois navios diagonais
    tabuleiro[5][5] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;

    tabuleiro[8][2] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[6][4] = 3;

    exibirTabuleiro(tabuleiro, 10);

    // Nível Mestre - Habilidades Especiais com Matrizes
    printf("Nível Mestre - Habilidades Especiais no Tabuleiro:\n");

    // Exemplo de habilidade especial - cone
    printf("Habilidade: Cone\n");
    int habilidadeCone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    exibirTabuleiro(habilidadeCone, 5);

    // Exemplo de habilidade especial - octaedro
    printf("Habilidade: Octaedro\n");
    int habilidadeOctaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    exibirTabuleiro(habilidadeOctaedro, 5);

    // Exemplo de habilidade especial - cruz
    printf("Habilidade: Cruz\n");
    int habilidadeCruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };
    exibirTabuleiro(habilidadeCruz, 5);

    return 0;
}
