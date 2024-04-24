//Implementando código condizente com o enunciado:
#include <stdio.h>

int main(){
    int pulo[5], i, *p;
    for(i = 0; i < 5; i++){
        pulo[i] = 1+i;
     
    }
    printf("Terceiro elemento: %d\n", *(pulo + 2) );
    printf("Quinto elemento: %d\n", *(pulo + 4) );
    printf("Endereço do quinto elemento: %p\n", pulo + 4);
    printf("Endereço do terceiro elemento: %p\n", pulo + 2 );

/* Portando a forma correta de referenciar o valor do terceiro elemento do vetor é *(pulo + 2). 
Caso houvesse a necessidade de referir-se ao endereço do terceiro elemento a opção "pulo +2" faz esse papel.
Os outros dois refrem-se ao valor e ao endereço da posição 5. */
}
