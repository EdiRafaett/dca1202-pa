/*Um ponteiro para funções é uma variável que armazena o endereço de memória de uma função. 
Em outras palavras, ele aponta para o local onde a função está armazenada na memória. Assim como um ponteiro
para uma variável aponta para o endereço de memória dessa variável, um ponteiro para uma função aponta 
para o endereço de memória dessa função.
Agora, por que isso é útil? Bem, com um ponteiro para funções, você pode passar uma função 
como argumento para outra função, ou pode armazenar uma função em uma estrutura de dados, 
ou pode chamar diferentes funções com base em alguma condição, tudo isso de uma maneira flexível e dinâmica.
Então, em resumo, um ponteiro para funções é como um atalho que permite acessar e manipular funções 
de uma maneira dinâmica e flexível em C. Ele ajuda a tornar o código mais modular, reutilizável
 e fácil de entender.*/

 //Calculadora de módulo da soma e raízes de uma equação de segundo grau:

#include <stdio.h>
#include <math.h>
void eqseg(int a, int b, int c){
  double delta, r1, r2;
  delta = (b*b)-(4*a*c);
  if(delta >=0 && a!=0){
    r1 = (-b + (sqrt(delta)))/(2*a);
    r2 = (-b - (sqrt(delta)))/(2*a);
    printf("As raízes são: %f e %f\n", r1, r2);
  }
  else if (a==0){
    printf("a não pode ser diferente de zero");
  }
  else{
    printf("sem solução real");
  }
}
void modulo(int a, int b, int c){
  double raiz, squad = ((a*a)+(b*b)+(c*c));
  raiz = sqrt (squad);
  printf("o módulo dos 3 números é: %f\n", raiz);

}

int main(void){
  void (*ponteiro[])(int, int, int) = {modulo, eqseg};
  int a = 1, b = 2, c =  -15, opcao;
  printf("digite 0 para módulo ou 1 para raízes: \n");
  scanf("%d", &opcao);
  (*ponteiro[opcao])(a, b, c);
  return 0;
}