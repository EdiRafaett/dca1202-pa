#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
  int i;
  for (i = 0; i < TAM; i++){
  if (vetor[i] == v)
  return i;
  }
  return -1;
}
int funcao2(int vetor[], int v, int i, int f){
  int m = (i + f) / 2;
  if (v == vetor[m])
  return m;
  if (i >= f)
  return -1;
  if (v > vetor[m])
  return funcao2(vetor, v, m+1, f);
  else
  return funcao2(vetor, v, i, m-1);
}
  int main(){
  int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
  return 0;
}

/*JULGANDO ALTERNATIVAS:
I. O resultado da impressão na linha 24 é: 7 - 7. Verdadeiro: a função 1 vai retornar 7
pois vai comparar o 15 que ela recebeu com cada posição do vetor até encontrar o 15 que está na posição 7,
a função 1 portanto retorna i que vale 7.
Já a chamada da função 2 basicamente obterá m=4 pois é inteiro... e a condição que se encaixa é a que repete 
todo mundo e acrecenta 1 a m... quando repetir algumas vezes m=7 que equivale a 15 no vetor.. como a comparação
é verdadeira retorna o valor de m que é 7 

*/