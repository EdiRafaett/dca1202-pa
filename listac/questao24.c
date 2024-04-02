#include <stdio.h>
void send (unsigned long estado){
    printf("número de saída: %lu\n", estado);
}

// Função para converter uma matriz 8x8 de 0s e 1s em um unsigned long
unsigned long matriz_para_ulong(unsigned char matriz[8][8]) {
    unsigned long estado = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // Desloca o resultado para a esquerda (multiplicação por 2) e adiciona o valor da célula.
            //em outras palavras: << "empurra" os bits uma posição a esquerda liberando um espaço e o | coloca o bit seguinte nesse espaço"
            estado = (estado << 1) | matriz[i][j];
        }
    }
    //enviando resultado para a função de saída:
    send(estado);
    return estado;
}

int main() {
    // Exemplo de matriz 8x8 com 0s e 1s
    unsigned char matriz[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };

    // Enviando a matriz para a função:
    matriz_para_ulong(matriz);

    return 0;
}
