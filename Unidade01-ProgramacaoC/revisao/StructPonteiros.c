/*A idéia de structs veio para facilitar como o programador lida com os dados que  se relacionam entre
sí, como por exemplo um cliente, que possui diversas informações ligadas a si mesmo, sendo melhor trabalhar
com structs do que criar um array para cada categoria de dados.*/
#include <stdio.h>

//Struct para clientes com todas as variáveis para receber os dados necessários:
struct clientes{
    int id; 
    int fone;
    int cpf;
};
int main(){
    // declaração dos clientes no struct clientes e ponteiro:
    struct clientes cliente1, cliente2, *pc;
    pc = malloc(10 * sizeof(struct clientes)); //alocação de memória para o ponteiro
    pc[0].id = 14394; //O ponteiro aponta para a variável id do cliente 1 e lá é armazenado o id
    pc[1].id= 14395; //O ponteiro aponta para a variável id do cliente 2 e lá é armazenado o id
    //CLIENTE 1:
    printf("Digite seu cpf do cliente 1: \n");
    scanf("%d", &pc->cpf);
    printf("Digite o telefone do cliente 1: \n");
    scanf("%d", &pc->fone);
    //CLIENTE 2:
    printf("Digite seu cpf do cliente 2: \n");
    scanf("%d", &(pc+1)->cpf);
    printf("Digite o telefone do cliente 2: \n");
    scanf("%d", &(pc+1)->fone);
    //Informações imprimidas:
    printf("Cliente 1:\n");
    printf("id: %d\n", pc->id);
    printf("fone: %d\n", pc->cpf);
    printf("fone: %d\n", pc->fone);
    printf("Cliente 2:\n");
    printf("id: %d\n", (pc+1)->id); 
    printf("fone: %d\n", (pc+1)->cpf);
    printf("fone: %d\n", (pc+1)->fone);

    free(pc);
    
}

/*OBS: Note que existem diversas maneiras de fazer o ponteiro saltar na memória em casos de struct
Pode-se usar tanto p[i].variavel ou (p+1)->varivel.

Basicamente assim que funciona um struct... Um conjunto de variáveis comuns a um ou grupo que podem ser
declaradas e essas variáveis como visto podem ser acessadas através de ponteiros*/