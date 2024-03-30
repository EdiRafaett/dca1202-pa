#include <stdio.h>
main(){
  int i=5, *p;
  p = &i;
  printf("valor de p: %p\n", p);// Mostra o endereço para o qual p aponta (4094 teoricamente)
  printf("valor de p+1: %p\n", p+1);// Nesse caso p aponta para o endereço do inteiro vizinho na memória (pulou os dois bytes = 4096)
  printf("valor de *p+2: %d\n", *p+2); //Soma-se dois ao inteiro que está no endereço de memória para o qual p aponta 
  printf("valor de **&p: %d\n", **&p);// *& se cancelam, portanto restando *p que é o inteiro para o qual p aponta
  printf("valor de 3**p: %d\n", 3**p); //nesse caso o primeiro * indica multiplicação do inteiro para o qual o ponteiro p aponta por 3
  printf("valor de **&p+4: %d\n", **&p+4); //Soma-se 04 ao inteiro para o qual p aponta 
    
}           