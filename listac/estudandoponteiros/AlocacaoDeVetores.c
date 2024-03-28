#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x;
    x = malloc(10 * sizeof(int));
    //x[1] = 3;
    for(int i = 0; i < 10; i ++){
        x[i] = i+1;
    printf("valor guardado em x1: %d\n", x[i]); 
    printf("%p\n", &x[i]);
    }
    free(x); // faz a liberação da memória alocada
    return 0;
}
