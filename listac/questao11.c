#include <stdio.h>

int main(){
    char xc[4];
    int xi[4];
    float xf[4];
    double xd[4];
    printf("valor de x+1: %d, %d, %d, %d\n", (xc+1), (xi+1), (xf+1), (xd+1)); 
    printf("valor de x+2: %d, %d, %d, %d\n", (xc+2), (xi+2), (xf+2), (xd+2));
    printf("valor de x+3: %d, %d, %d, %d\n", (xc+3), (xi+3), (xf+3), (xd+3));

}

/*O endereço foi imprimido em decimal para melhorar a visualização dos saltos dos endereços.
como pode ser visto nos padroões normais o char ocupa 1 byte, o int 4 bytes, o float 4 bytes e o double 8 bytes
Basicamente cada posição do vetor ocupa a quantidade de bytes do tipo que foi criado. Quando é feito um salto
de uma posição para outra em um inteiro, por exemplo, o salto que está sendo dado é de quatro bytes, onde cada
cada um desses bytes tem um endereço na memória.
Levando pro exemplo da questão:
char ocupando 1 byte: x[0]= 4092 x[1]= 4093, x[2]= 4094, x[3]= 4095
inteiro ocupando 2 bytes: x[0]= 4092 x[1]= 4094, x[2]= 4096, x[3]= 4098
float ocupando 4 bytes: x[0]= 4092 x[1]= 4096, x[2]= 5000, x[3]= 5004
double ocupando 8 bytes: x[0]= 4092 x[1]= 5000, x[2]= 5008, x[3]= 5016 */