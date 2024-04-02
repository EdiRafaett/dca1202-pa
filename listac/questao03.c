#include <stdio.h>

int main() {
    int i = 10, j = 20;
    int *p, *q;

    // O ponteiro p apenas recebe o endereço de i =  LEGAL
    p = &i;
    printf("O endereço para o qual p aponta é: %p\n", p);

    // q não pode gravar o endereço de j na memória, pois não tem memória reservada = ILEGAL
    //*q = &j;
    //printf("Valor de *q: %d\n", *q);

    // é como de &* se cancelassem, dessa maneira resta somente &, ou seja, p recebe o endereço de i = LEGAL
    p = &*&i;
    printf("Valor de *p deve ser: %d\n", *p);

    // Não se utiliza parênteses nesse tipo de operação 
    //i = (*&j);
   // printf("Valor de i: %d\n", i);

    // i recebe o valor de j, em outras palavras i recebe o valor guardado no endereço de j = LEGAL
    i = *&j;
    printf("Valor de i deve ser: %d\n", i);

    // i recebe o valor guardado no endereço de memória resevado para j, igual a sentença de cima = LEGAL
    i = *&*&j;
    printf("Valor de i deve ser: %d\n", i);

    // O ponteiro q tenta receber o inteiro para o qual o ponteiro p aponta. = ILEGAL
    //q = *p;
    //printf("Valor de q: %d\n", *q);

    // Não sei explicar porque essa da erro. 
    //i = (*p)++ + *q;
    //printf("Valor de i deve ser: %d\n", i);

    return 0;
}
