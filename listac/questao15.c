#include <stdio.h>
#include <stdlib.h>

// Função para trocar dois elementos
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar um array usando Bubble Sort
void bubbleSort(float arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Chama a função swap para trocar os elementos
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    float *x;
    int i, n;

    // Quantidade de valores a serem ordenados
    printf("Digite a quantidade de valores que deseja ordenar: ");
    scanf("%d", &n);

    // Verifica se a alocação de memória foi bem-sucedida
    x = malloc(n * sizeof(float));
    if (x == NULL) {
        printf("Erro de alocação de memória");
        return 1;
    }

    // Recebendo os valores
    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", (i + 1));
        scanf("%f", &x[i]);
    }

    // Chama a função bubbleSort para ordenar o array
    bubbleSort(x, n);

    // Imprime os valores ordenados
    printf("Valores ordenados: ");
    for (i = 0; i < n; i++) {
        printf("%f ", x[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(x);

    return 0;
}
