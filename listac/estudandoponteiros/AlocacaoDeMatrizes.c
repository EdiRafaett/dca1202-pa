//BAIXA EFICIÊNCIA:

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nl = 4, nc = 5, i;
    int **x;
    x = malloc(nl * sizeof(int*)); // o * no int para indicar que é ponteiro. SEMPRE LEMBRAR!
    for(i = 0; i<nl; i++){
        x[i] = malloc(nc * sizeof(int));
    }
    x[1][2] = 3; 
    for(i = 0; i < nl; i++){
        free(x[i]);
    }
    free(x);
    return 0;
}
/*Como foi dito essa matriz foi alocada na memória virtual na parte do stack linha por linha..
dessa maneira nada garante que essas linhas vão ser armazenadas de forma contínua na memória,
facilitando assim processo como o de cópia. Nesse caso se fosse ser copiada essa matriz teria
que ser copiada linha a linha. */

