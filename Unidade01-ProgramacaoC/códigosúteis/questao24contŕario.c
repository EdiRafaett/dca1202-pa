/*GUARDANDO ESSA QUESTÃO PARA SEMPRE ME LEMBRAR A IMPORTÂNCIA DE LER O ENUNCIADO E GARANTIR QUE ENTENDEU
E NÃO PERDER OUTRA TARDE FAZENDO A COISA ERRADA KKKKKKKKKKKKKKKKKKKKKKKKKKKK */


#include <stdio.h>
#include <stdlib.h>

// Função para converter um número decimal para binário
int **send(unsigned long estado) {
    int **m = (int **)malloc(8 * sizeof(int *)); // Aloca dinamicamente as linhas da matriz
    if (m == NULL) {
        printf("Erro ao alocar memória para a matriz.\n");
        exit(1);
    }
    for (int i = 0; i < 8; i++) {
        m[i] = (int *)malloc(8 * sizeof(int)); // Aloca dinamicamente as colunas de cada linha
        if (m[i] == NULL) {
            printf("Erro ao alocar memória para a matriz.\n");
            exit(1);
        }
    }

    int resto;
    int i = 0;

    // Convertendo dec para binário
    while (estado > 0) {
        resto = estado % 2;
        m[7 - i / 8][7 - i % 8] = resto; // Armazena o bit na posição correspondente, começando do bit menos significativo
        estado = estado / 2;
        i++;
    }

    return m;
}

int main() {    
    unsigned long dec;
    int **binario; // Ponteiro para matriz 8x8

    printf("Número decimal que deseja converter: ");
    scanf("%lu", &dec);

    // Chama a função para converter decimal para binário e obtém a matriz binária de volta
    binario = send(dec);

    // Imprime a matriz binária
    printf("Representação binária:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", binario[i][j]);
        }
        printf("\n");
    }

    // Liberar memória alocada para a matriz
    for (int i = 0; i < 8; i++) {
        free(binario[i]);
    }
    free(binario);

    return 0;
}
