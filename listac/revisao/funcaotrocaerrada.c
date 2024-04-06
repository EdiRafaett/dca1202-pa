#include <stdio.h>
void troca (int a, int b){
  //varável temporaria para permitir a troca
  int tmp;
  //Impressão dos valores recebidos por a e b
  printf("Valores de a e b recebidos pela função: %d e %d \n", a, b);
  //Algoritmo de troca
  tmp = a; 
  a = b;
  b = tmp;
  //Impressão que mostra que a troca ocorreu
  printf("Valores de a e b depois da troca dentro da função: %d e %d\n", a, b);
}
int main(void) {
// Declaração de x e y;
  int x = 3, y = 4;
  //Impressão de x e y:
  printf("Valores de x e y antes de chamar a função: %d e %d\n", x, y);
  //chamada da função de troca
  troca(x, y);
  //Impressão dos valores de x e y que deveriam ter sido trocados
  printf("valores de x e y depois de ter chamado a função: %d e %d\n", x, y);
  return 0;
}
//Toda modificação feita dentro de uma função só será feita dentro dela mesma, o que a função recebeu foi uma cópia dos valores. Para que as modificaçõe s sejam vistas na main é necessário o uso do conceito de ponteiros. 