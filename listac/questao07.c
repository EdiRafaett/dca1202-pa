//Densenvolvendo a Questão 7:
#include <stdio.h>

int main(){
    int mat[4], *p, x, i;
    for(i = 0; i<4; i++){
        mat[i] = i+1;
    }
    

    printf(": %p\n", p = mat + 1); // válida! o ponteiro p aponta para o o segundo elemento do array
    printf(": %p\n", p = mat); // válida! o ponteiro p aponta para o primeiro elemento do array
    printf(": %p\n", p = mat); //idêntica a anterior
    printf(": %d\n", x = (*mat)); //válida! Aqui x recebe o valor do primeiro elemento do array. Caso não houvesse nada na posição retornaria lixo
}