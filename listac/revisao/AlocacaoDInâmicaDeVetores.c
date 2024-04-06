#include <stdio.h>

int main(){
int *x, i;
x = malloc(10*sizeof(int)); // O ponteiro x aponta para o primeiro endereço de um bloco de memória com capacidade de armazenar 10 inteiros. Esse ponteiro agora é literalmente um array.
for(i = 0; i<10; i++){
    x[i] = i+1;
    printf("%d, ", x[i]); //note que  quando se trata de arrays não há a necessidade de passar o "*" para indicar que se deseja imprimir os valores 
}
return 0;
}