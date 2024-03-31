#include <stdio.h>
#include <stdlib.h>

// Função para receber valores do usuário e retornar um ponteiro para o array de valores
int *recvalores(int *n) { 
    int *x, i;
    //Quantidade de valores a serem ordenados:
    printf("Digite quantidade de valores que deseja ordenar: ");
    scanf("%d", n);
    x = malloc((*n) * sizeof(int));
    // Recebendo os valores:
    for(i = 0; i < (*n); i ++) {
        printf("Digite o valor %d: ", (i+1)); 
        scanf("%d", &x[i]);
    }
    return x;
}

// Função de comparação para qsort
int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int *values, i, n;
    
    // Recebendo os valores do usuário e armazenando-os em 'values'
    values = recvalores(&n);

    // Ordenando os valores usando qsort
    qsort(values, n, sizeof(int), compare);
      
    // Exibindo os valores ordenados
    printf("Valores ordenados:\n");
    for (i = 0; i < n; i++){
        printf("%d ", values[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(values);

    return 0;
}
