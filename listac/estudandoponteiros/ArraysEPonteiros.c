#include <stdio.h>

int main(){
  int x[10];
  int *px, i;
  px = &x;
  //px = px+1; Note que se eu fizer isso estarei substituindo o valor de px por px+1 dessa forma meio que perco o endereço de px.
  for(i=0; i<10; i++){
    x[i] = i+1;
  }
  for(i=0; i<10; i++){
   printf("%d, ", x[i]);
  }
  printf("\n");
  printf("endereço px: %p \n", px);
  printf("endereço de px+2: %p \n", px+2); //Aqui estará mostrando o endereço de px+2 sem precisar mudar o valor de px
  printf("Valor do conteúdo de px: %d \n", *px); // aqui   mostra-se o valor que está dentro do endereço armazenado em px
  printf("novo valor guardado no endereço aramazenado em px: %d \n ", *(px+3)); // Agora estou somando o inteiro 2 ao inteiro guardado dentro do endereço que está armazenado em px
  
  return 0;
}