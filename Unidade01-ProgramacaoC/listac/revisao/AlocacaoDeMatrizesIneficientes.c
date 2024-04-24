//Alocação desse tipo de matriz é feita no heap (Nada garante que as linhas vão se alocadas uma após a outra)
// **matriz>>>>>> lê-se matriz é um ponteiro para ponteiro
/* se int **x, e depois usando-se malloc nesse x, x agora guarda o endereço do primeiro elemento de
 um array para endereços, ou seja, o array auxiliar x receberá os endereços do
 primeiro byte de cada array que será as linhas da matriz*/
 /*PASSO A PASSO para se alocar uma matriz: */
 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    int nl = 4, nc = 5, i; //número de linhas e colunas da matriz
    int **x; //ponteiro para ponteiros
    //PASSO 1: Alocação do array auxiliar:
    x = malloc(nl * sizeof(int*)); //int* pois o que será recebido é endereços.
    //PASSO 2: Alocação das linhas da matriz:
    for(i = 0; i < nl; i++){
        x[i] = malloc(nc* sizeof(int)); //int apenas, pois aqui será guardado os dados 
    }
    //Aqui já pode-se utilizar a matriz:
    x[1][2] = 3; // a linha dois coluna 3 receberá o valor 3 
    //PASSO 3: Liberação das alocações no sentido inverso:
    for(i = 0; i < nl; i++){
        free(x[i]); //Liberação das linhas da matriz 
    }
    free(x); //Liberação do array auxiliar 


 }


 /*-------------------------------MATRIZ INEFICIENTE-------------------------------------*/