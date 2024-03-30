//Visto que os código são iguais, so mudam o que é pedido na saída, uni os dois:
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("valor guardado: %d", *(vet+i));
  /*Funciona da seguinte forma: *vet acessa o endereço de início do array e imprime o valor que está lá dentro
Ao incrementar de um em um as posições desse array vão sendo varridas e todos os seus valores mostrados.*/
  printf("    Endereço em hexadecimal: %X\n",vet+i); 
  /*No segundo printf, podemos ver o formato sem o *. Agora  será imprimido o endereço através 
  da expressão "vet+1", só que em hexadecimal.*/
  }
}

