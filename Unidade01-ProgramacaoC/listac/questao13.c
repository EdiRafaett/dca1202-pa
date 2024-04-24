/*Memória leak é o nome que se dá quando se faz uma alocação de memória em C, sem liberar essa memória
após seu uso. O que acontece é que essa memória irá ficar alocada durante toda a execução do programa não 
podendo ser usada enquanto o programa não for interrompido ou a memória liberada com a função free(). */

#include <stdio.h>
#include <stdlib.h>
// Função de preenchimento de vetor
void preencherV(int *vetor, int tam ){
  for(int i = 0; i < tam; i++){
    vetor[i] = i;
  } 
}
//FUnção preenchimento de Matriz
void preencherM(int nl, int nc, int **x ){
  for(int i = 0; i < nl; i++){
    for(int j = 0; j<nc; j++){ // estrutura para preenchimento da matriz.
        x[i][j] = j+i;
}
  }
}

int main() {
  //Entrada de tamanho do vetor:
    int tamanho = 5;
  // *V recebe o endereço de onde iniciou a alocação
  int *V = malloc(tamanho*sizeof(int));
  //chama a função de preenchimento
  preencherV (V, tamanho);
  //Forma correta de liberar:
  //free(V);
 //Aqui temos claramente um vazamento de memória onde o espaço alocado no ponteiro V não foi liberado


//------------------------------------ALOCAÇÃO DE MATRIZ:--------------------------------------------------------------------
//Parâmetros da matriz:
  int nl = 4, nc = 5;
  int **x, i, j;
  x = malloc(nl * sizeof(int*)); // alocação da memória no ponteiro de ponteiros 
  x[0] = malloc(nc * nl * sizeof(int));// alocação da memória para a matriz e seu endereço inicial gravado em x[0]
  for(i = 1; i < nl; i++){
      x[i] = x[i-1]+nc; // Para pular para a proxima linha isso teve que ser feito devido o for começar em 1.
  }
  preencherM(nl, nc, x);
  //Sequência correta de liberar:
  //free(x[0]);
  // free(x);

 /* Nesse caso iremos abordar dois problemas de uma vez só:
Fazendo "free (x)" antes de "free(x[0])" perde-se o endereço onde x[0] esta alocado
causando um tipo de vazamento de memória e o outro é liberar só x[0] e esquecer de liberar x*/

  
  //-------------------------------PERDENDO A REFERÊNCIA:----------------------------------------
  int *ptr = malloc(sizeof(int)); // Alocação de memória
  ptr = NULL; // Perde-se a referência para o bloco de memória alocado
 // Forma correta de liberar
   //free(ptr);
  return 0;
  }

