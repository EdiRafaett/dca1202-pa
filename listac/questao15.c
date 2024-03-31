#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, i, n, j, temp;
    //Quantidade de valores a serem ordenados:
    printf("Digite quantidade de valores que deseja ordenar: ");
    scanf("%d", &n);
    x = malloc(n * sizeof(int));
    // Recebendo os valores:
    for(int i = 0; i < n; i ++){
        printf("Digite o valor %d\n", (i+1)); 
        scanf("%d", &x[i]);
    }
    //ordenação:
        for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
            // Troca os elementos se estiverem fora de ordem
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d, ", x[i]);
        }
        printf("\n");
        return 0;
        free(x);
}