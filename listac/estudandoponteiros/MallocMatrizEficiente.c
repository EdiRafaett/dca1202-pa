#include <stdio.h>
#include <stdlib.h>

int main(){
    int nl = 4, nc = 5;
    int **x, i, j;
    x = malloc(nl * sizeof(int*)); // alocação da memória no ponteiro de ponteiros 
    x[0] = malloc(nc * nl * sizeof(int));// alocação da memória para a matriz e seu endereço inicial gravado em x[0]
    for(i = 1; i < nl; i++){
        x[i] = x[i-1]+nc; // Para pular para a proxima linha isso teve que ser feito devido o for começar em 1.
    }
    for(i = 0; i < nl; i++){
        for(j = 0; j<nc; j++){ // estrutura para preenchimento da matriz.
            x[i][j] = j+i;

        }

    }
    for(i = 0; i < nl; i++) {
        for(j = 0; j < nc; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    
    free(x[0]);
    free(x);
    return 0;

    }