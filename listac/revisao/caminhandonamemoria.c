#include <stdio.h>

int main(){
  unsigned int x; // usa: 32 bits = 4 bytes
  unsigned char *px; // criação do ponteiro usa: 8 bites = 1 byte
  x = 3;
  px = &x; // px recebe o endereço de x
  *px = 1; // grava no endereço guardado em px o valor 1 que no caso será gravado na variável x =1
  *(px+1) = 1; // gravei o valor 1 no primeiro bit do byte 1, que equivale a 256, somado com o 1 do byt 0 = 257 
  printf("%d\n", x); //  valor de x que lê os 4 bytes e vê o decimal que está sendo formado por todos 32 bits.
  return 0;
  
}