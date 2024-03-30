#include <stdio.h>

int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value; // válido: o vetor float aloha recebeu na posição 3 do vetor o valor float 2.2
    //scanf("%f", &aloha); //inválido
   // aloha = "value"; inválido: aloha é um vetor de float
    printf("%f", aloha); // inválido: necessário informar qual posição do vetor deseja imprimir
    coisas[4][4] = aloha[3];// válido: O valor da posição 4 do vetor está sendo armazenado na posição linha 3 coluna 3 da matriz
    
}