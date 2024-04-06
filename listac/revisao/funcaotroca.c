#include <stdio.h>
void troca (int *a, int *b){
  //varável temporaria para permitir a troca
  int tmp;
  //Impressão dos valores recebidos pelos ponteiros a e b
  printf("Valores de a e b recebidos pela função: %d e %d \n", *a, *b);
  //Algoritmo de troca:
  tmp = *a; //tem recebe o valor que está dentro do endereço que a aponta
  *a = *b; //o ponteiro a substitui o valor para onde ele aponta pelo valor para onde o ponteiro b aponta
  *b = tmp; //o ponteiro b grava o alor de temp no endereço para onde ele aponta 
  //Impressão que mostra que a troca ocorreu
  printf("Valores de a e b depois da troca dentro da função: %d e %d\n", *a, *b);
}
int main(void) {
// Declaração de x e y;
  int x = 3, y = 4;
  //Impressão de x e y:
  printf("Valores de x e y antes de chamar a função: %d e %d\n", x, y);
  //chamada da função de troca
  troca(&x, &y); //passa os endereços de x e y para os ponteiros a e b
  //Impressão dos valores de x e y depois da troca
  printf("valores de x e y depois de ter chamado a função: %d e %d\n", x, y);
  return 0;
}
