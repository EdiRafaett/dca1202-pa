/*
  Array são vetores, uma sequência de dados de mesmo tipo que podem ser armazenados na memória
de forma consecutiva 
Pode-se usar ponteiros para interagir com esses arrays onde cada "salto" de endereço deste
ponteiro dentro de um array será de acordo com a quantiade de bytes que esse tipo ocupa
Se o Array for de inteiros, o ponteiro também deverá ser e os saltos serão de 4 em 4 bytes 

*/
#include <stdio.h>

int main(){
  int x[10], i, *px;
  px = x; //Manda o px apontar para o primeiro elemento do array x (posição 0)
  for(i = 0; i <10; i++){
    x[i] = i+1; // = p[i] = *(px+i)
    printf("valor de x na posição i: %d\n", x[i]);
  }
  printf("\n");
  printf("\n");
  printf("Valor de px: %d\n", *px); // imprime o valor que está no endereço zero do vetor
  printf("Endereço para o qual px aponta: %p\n", px);
  //px = px+1; >> desnecessário!
  printf("Valor de px deslocado: %d\n", *(px+1));
  printf("Endereço que px guardou ao deslocar: %p\n", (px+1)); //Px deu um salto de uma posição no vetor, equivalente a 4 bytes (tipo inteiro)
}