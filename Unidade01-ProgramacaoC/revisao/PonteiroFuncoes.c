/*Sabe-se que o uso de ponteiros é interessante para se guardar endereços de memória que retorna algum dado
Para algumas aplicações é importante guardar onde está pedaços de código na memória.... Ai que surgem os
ponteiros para função*/

#include <stdio.h>

//Definição de diversas funções:

void soma(int a, int b){
    printf("soma: %d \n", a + b);

}
void subtracao(int a, int b){
    printf("subtração: %d \n", a - b);

}
void multiplicacao(int a, int b){
    printf("Multiplicação: %d \n", a * b);
}

int main(void){
    //Criação de um ponteiro array para função que recebe as tres funções criadas acima e tem dois inteiros
    void(*pf_array[])(int, int) = {soma, subtracao, multiplicacao};
    int a = 3, b =4, opcao;
    //Usuário escolhe qual função deseja usar:
    printf("Digite o valor relativo a opção que deseja usar:");
    scanf("%d", &opcao);
    //O ponteiro aponta para a função escolhida e passa os parâmetros a e b para a função.
    (*pf_array[opcao])(a , b);
    return 0;
}