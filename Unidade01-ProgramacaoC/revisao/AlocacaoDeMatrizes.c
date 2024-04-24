/*Alocação de memória eficiente, pois será feito a alocação de toda uma matriz em um único array
Ainda haverá a presença do array auxiliar para guardar os endereços iniciais de cada linha dentro do array*/
//Passo a passo para criação de matriz:
#include <stdio.h>

int main(){
    int nl = 4, nc = 5, i;
    int **x;
    //Passo 1: Aloca o array auxiliar:
    x = malloc(nl * sizeof(int*));
    //Passo 2: Alocação de um único array para toda a matriz
    x[0] = malloc(nl * nc * sizeof(int)); // X[0] do array auxiliar recebeu o endereço do primeiro byte da matriz
 //Passo 3: Array auxiliar receber os endereços das demais linhas dentro do array:
    for(i = 1; i< nl; i++){
        x[i] = x[i-1] + nc; // Como x[0] já tinha recebido o seu endereço ele foi pulado nesse for
    

    }
// Passo 4: Liberação de memória no sentido inverso:
    free(x[0]); //Note que x[0] recebeu o endereço do primeiro byte de toda a matriz. Dessa forma só ele precisa ser liberado
    free (x); // por fim a liberação do array auxiliar 

}