#include <stdio.h>

void soma(int a, int b){ //função para soma 
    printf("soma = %d\n", a+b);
}
void subtracao(int a, int b){ //função para subtração
    printf("Subtração = %d\n", a - b);

}
void multiplicacao(int a, int b){      // função para multiplicação 
    printf("Multiplicação = %d\n", a * b);
}
int main(void){
    void (*pf_array[])(int, int) = {soma, subtracao, multiplicacao}; //criando o ponteiro array para função inteiro e que retorna inteiro 
int opcao, a = 3, b = 4;    //parâmetros de a e b 
printf("Digite sua escolha: \n"); 
scanf("%d", &opcao);  //0 = soma; 1 = subtração; 2 = multiplicação
(*pf_array[opcao])(a, b); // a escolha do usuário é passada em opcao junto com os parâmetros a e b
return 0;

}