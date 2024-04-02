#include <stdio.h>
#include <stdlib.h>

// Função para multiplicação de matrizes
void multiplica_matrizes(int **A, int **B, int **C, int NLA, int NCA, int NCB) {
    // Itera sobre as linhas de A
    for (int i = 0; i < NLA; i++) {
        // Itera sobre as colunas de B
        for (int j = 0; j < NCB; j++) {
            // Inicializa o elemento C[i][j] como zero
            C[i][j] = 0;
            // Calcula o produto interno entre a linha i de A e a coluna j de B
            for (int k = 0; k < NCA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Função para imprimir uma matriz
void imprime_matriz(int **matriz, int linhas, int colunas) {
    // Itera sobre as linhas da matriz
    for (int i = 0; i < linhas; i++) {
        // Itera sobre as colunas da matriz
        for (int j = 0; j < colunas; j++) {
            // Imprime o elemento da matriz na posição i, j
            printf("%d ", matriz[i][j]);
        }
        // Imprime uma quebra de linha para passar para a próxima linha da matriz
        printf("\n");
    }
}

    int main() {
        // Definindo as dimensões das matrizes
        int NLA = 2, NCA = 3; // Número de linhas e colunas de A
        int NCB = 2; // Número de colunas de B

        // Alocando memória para as matrizes A, B e C
        int **A = malloc(NLA * sizeof(int *)); // Alocando ponteiros para as linhas de A
        int **B = malloc(NCA * sizeof(int *)); // Alocando ponteiros para as linhas de B
        int **C = malloc(NLA * sizeof(int *)); // Alocando ponteiros para as linhas de C
        A[1] = malloc(NCA * sizeof(int));
        C[1] = malloc(NCB * sizeof(int));
        B[1] = malloc(NCB * sizeof(int));
    // Alocando memória para os elementos de cada linha de A, B e C
    for (int i = 0; i < NLA; i++) {
        A[i] = (int *)malloc(NCA * sizeof(int));
        C[i] = (int *)malloc(NCB * sizeof(int));
    }
    for (int i = 0; i < NCA; i++) {
        B[i] = (int *)malloc(NCB * sizeof(int));
    }

    // Preenchendo as matrizes A e B
    for (int i = 0; i < NLA; i++) {
        for (int j = 0; j < NCA; j++) {
            A[i][j] = i * NCA + j + 1; // Preenchendo A com valores de 1 a NLA * NCA
        }
    }
    for (int i = 0; i < NCA; i++) {
        for (int j = 0; j < NCB; j++) {
            B[i][j] = i * NCB + j + 1; // Preenchendo B com valores de 1 a NCA * NCB
        }
    }

    // Chamada da função que multiplica as matrizes 
    multiplica_matrizes(A, B, C, NLA, NCA, NCB);

    // Imprimindo as matrizes A, B e C
    printf("Matriz A:\n");
    imprime_matriz(A, NLA, NCA);
    printf("\nMatriz B:\n");
    imprime_matriz(B, NCA, NCB);
    printf("\nMatriz Resultante C = AxB:\n");
    imprime_matriz(C, NLA, NCB);

    // Liberando a memória alocada
    for (int i = 0; i < NLA; i++) {
        free(A[i]);
        free(C[i]);
    }
    for (int i = 0; i < NCA; i++) {
        free(B[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
