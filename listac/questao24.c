#include <stdio.h>
#include <math.h>
//função de saida :
unsigned long send(unsigned long estado){
  printf("Estado enviado: %lu\n", estado);
}
unsigned long codificadora(unsigned char m[8][8]) {
    int i, j, cont = 63; 
    unsigned long estado = 0;
  //varrendo a matriz somando as potências de dois:
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (m[i][j] == 1) {
                estado = estado + (unsigned long)pow(2, cont); 
            }
            cont--;
        }
    }
  send(estado);
  
}

int main() {
  //matriz modificável:
    unsigned char m[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };
  //enviando matriz para a função codificadora:
  codificadora(m);
    return 0;
}



/*OBS para o aprendizado de funções: Quando dentro da main ou outra função, informo o nome de uma função
 e passo um parâmetro ou mais, o valor desses parâmetros passados chgarão nas respectivas posições nas variáveis declaradas no escopo da função*/