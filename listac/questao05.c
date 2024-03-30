int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5}; //criou um array com números não inteiros
  float *f; //Ponteiro para float
  int i; // variável inteira para o for
  f = vet; // Ponteiro f recebeu o endereço de memória do início do array
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i); // contador de repetição do laço
  printf(" vet[%d] = %.1f",i, vet[i]); // acesando a posição i do vetor e imprimindo seu valor
  printf(" *(f + %d) = %.1f",i, *(f+i)); //Acessa p endereço f+1 = "f(endereço do primeiro elemento do array)+i(qual posição acesar)"
  printf(" &vet[%d] = %X",i, &vet[i]); //imprime o endereço de v[i] em hexa decimal. 
  printf(" (f + %d) = %X",i, f+i); // Aqui faz exatamente a mesma coisa que o acima, só que "escrito" de forma diferente. 
  printf("\n");
  }
}