#include <stdio.h>

struct teste{
  int x;   //uma variável inteira x que pode receber algum valor inteiro (foi dado o valor 3 na questão)
  char nome[20]; // um char para receber o nome (jose na questão)
};
int main(void){
  struct teste jose, *s; //chamada do struct teste e jose, junto com a criação de um ponteiro  para esse struct
  s = &jose; // passando para o ponteiro o endereço de jose
  s-> x = 3; // armazenando 3 na variável x
  strcpy(s->nome, "jose"); // armazenando jose dentro do char nome 
  printf("%d\n", s->x); //imprimindo o que tem dentro da variável x 
  printf("%s\n", s->nome); // imprimindo o que tem dentro do char nome
}

/*Alguns parâmetros estavam sendo passados dentro do proprio struct o que estava causando erro. 
Com essa mudanças que fiz o codigo começou a funcionar. */

