#include <stdio.h>

struct clientes{
    int id;
    char nome;        // dentro do struct vão varias informações que tenho que guardar
    int fone;
}; //struct precisa desse ponto e virgula aqui

int main(void){
    struct clientes jose, *pc; //Foi criado o cliente josé e um ponteiro chamado de pc
    pc = &jose;     //Ponteiro aponta para José (primeiro byte onde as informações do cliente josé estão alocadas)
    pc -> id = 14394; // Acessando o endereço e gravando o id de José. 
    printf("id: %d\n", pc->id); //acessando o endereço e puxando o valor de id: mesma coisa de (*pc).id
    printf("digite o fone: "); 
    scanf("%d", &pc->fone); // Acessando o endereço e gravando o dado de telefone que o usário digitou
    printf("fone: %d\n", pc->fone); //  Acessando o endereço e puxando o número de telefone gravado

}


