#include <stdio.h>
#include <stdlib.h>

// Função para inicializar a matriz com zeros
void inicializarMatriz(int ***matriz, int nl, int nc, int np) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            for (int k = 0; k < np; k++) {
                matriz[i][j][k] = 0;
            }
        }
    }
}

// Função para alterar um elemento da matriz
void alterarElemento(int ***matriz, int nl, int nc, int np) {
    char resposta;
    do {
        printf("\nDeseja alterar um elemento da matriz? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's' || resposta == 'S') {
            int linha, coluna, profundidade, valor;

            printf("\nDigite a linha do elemento: ");
            scanf("%d", &linha);
            printf("Digite a coluna do elemento: ");
            scanf("%d", &coluna);
            printf("Digite a profundidade do elemento: ");
            scanf("%d", &profundidade);

            if (linha >= 0 && linha < nl && coluna >= 0 && coluna < nc && profundidade >= 0 && profundidade < np) {
                do {
                    printf("Digite o novo valor para o elemento [%d][%d][%d]: ", linha, coluna, profundidade);
                    scanf("%d", &valor);
                    if (valor != 1) {
                        printf("Apenas o valor 1 é permitido. Digite novamente.\n");
                    }
                } while (valor != 1);

                // Alterando o elemento da matriz
                matriz[linha][coluna][profundidade] = valor;
            } else {
                printf("Posição inválida!\n");
            }
        }
    } while (resposta == 's' || resposta == 'S');
}

// Função para imprimir a matriz de uma profundidade específica
void imprimirMatriz(int ***matriz, int nl, int nc, int np) {
    int profundidade;
    printf("\nDigite a profundidade que deseja imprimir: ");
    scanf("%d", &profundidade);

    if (profundidade >= 0 && profundidade < np) {
        printf("\nMatriz da profundidade %d:\n", profundidade);
        for (int i = 0; i < nl; i++) {
            for (int j = 0; j < nc; j++) {
                printf("%d ", matriz[i][j][profundidade]);
            }
            printf("\n");
        }
    } else {
        printf("Profundidade inválida!\n");
    }
}

int main() {
    int nl, nc, np, ***x, j, k, i;

    // Solicitando ao usuário número de linhas:
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &nl);

    // Solicitando ao usuário número de colunas:
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &nc);

    // Solicitando ao usuário número de planos:
    printf("Digite a profundidade de sua matriz: ");
    scanf("%d", &np);

    // Alocação de memória para x
    x = malloc(nl * sizeof(int**)); // Alocação do primeiro nível de ponteiros
    x[0] = malloc(nl * np * sizeof(int*)); // Alocação para os planos da matriz
    x[0][0] = malloc(nl * np * nc * sizeof(int)); // Alocação para a matriz tridimensional em si
    
    // Configuração dos ponteiros para acessar os elementos corretamente
    for (i = 0; i < nl; i++) {
        x[i] = x[0] + i * np;
        for (j = 0; j < np; j++) {
            x[i][j] = x[0][0] + (i * np + j) * nc;
        }
    }

    // Inicializando a matriz com zeros
    inicializarMatriz(x, nl, nc, np);

    // Chamando a função para alterar elementos da matriz
    alterarElemento(x, nl, nc, np);

    // Chamando a função para imprimir a matriz de uma profundidade específica
    imprimirMatriz(x, nl, nc, np);

    // Liberando a memória alocada
    free(x[0][0]);
    free(x[0]);
    free(x);

    return 0;
}
