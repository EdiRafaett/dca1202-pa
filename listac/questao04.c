#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor); 
    /*O endereço de valor foi passado para o ponteiro p1 e o valor 20 foi substituído nesse endereço
    Logo valor agora guarda o inteiro 20*/


    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
     /*O endereço de temp foi passado para o ponteiro p2 e o valor 29.0 foi substituído nesse endereço
    Logo temp agora guarda o float 29*/
    
    /* (c) */
    p3 = &nome[0]; //o ponteiro p3 recebeu o endereço da posição 0 do array nome
    aux = *p3; //aux recebeu valor armazenado nesse endereço
    printf("%c \n", aux); //aux agora imprime o que estava nessa posição
    
    /* (d) */
    p3 = &nome[4]; //o ponteiro p3 recebeu o endereço da posição 3 do array nome
    aux = *p3; //aux recebe esse caractere (quarto caractere)
    printf("%c \n", aux);
    
    /* (e) */
    p3 = nome; //o ponteiro p3 recebeu o endereço da posição inicial de nome
    printf("%c \n", *p3); //o valor guardado nessa posição é o primeiro caractere
    
    /* (f) */
    p3 += 4; //ponteiro 3 que estava apontando pra posição inicial anda para o endereço da quinta posição (letra e)
    printf("%c \n", *p3);
    
    /* (g) */
    p3--; 
    printf("%c \n", *p3); //volta um endereço de memória (letra t)
    
    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45; //valores adcionados na posição de memória equivalente
    vetor[2] = 27;
    p4 = vetor; //p4 recebeu o endereço da posição inicial de vetor
    idade = *p4; // idade recebe o valor desse endereço (31)
    printf("%d \n", idade);
    
    /* (i) */
    p5 = p4 + 1; //o ponteiro 5  recebe o endereço seguinte ao qual p4 aponta
    idade = *p5; //p5 aponta para o endereço da posição 1, idade recebe o valor da posição(45)
    printf("%d \n", idade);
    
    /* (j) */
    p4 = p5 + 1; //p4 agora recebe o endereço seguinte para o qual p5, posição 2 (valor 27)
    idade = *p4; //idade recebe o valor 27 
    printf("%d \n", idade);
    
    /* (l) */
    p4 = p4 - 2; //p4 regressa duas posições de memória, voltando para a que guarda o valor 31 (posição 0)
    idade = *p4; //idade recebe 31
    printf("%d \n", idade); 
    
    /* (m) */
    p5 = &vetor[2] - 1; //p5 recebe o endereço da posição 2 -1, ou seja, posição 1 que é 45
    printf("%d \n", *p5);
    
    /* (n) */
    p5++; //p5 o um incremento de um endereço (posição 2 do vetor) 
    printf("%d \n", *p5); //o valor guardado na posição 2 é 27
    
    return 0;
}
