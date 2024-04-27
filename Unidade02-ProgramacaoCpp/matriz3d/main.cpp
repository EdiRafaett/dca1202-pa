#include <iostream>

using namespace std;

int main(){
    int ***v, nx = 3, ny = 3, nz = 3, cont = 1;

    //Alocando memória para o array auxiliar que receberá endereços das linhas onde inicia-se cada plano:
    v = new int**[nx];
    //Alocando memória para o array que receberá o início o endereço de inicio de cada linha:
    v[0] = new int*[nx * ny];
    //Alocando espaço para todos elementos da matriz:
    v[0][0] = new int [nx * ny * nz];

    //Passando os endereços de inicio de cada plano para o array auxiliar:
    for(int i = 1; i < nx; i++){
        v[i] = v[i-1] + ny;
    }

    //Passando os endereços das elementos de início de cada linha de cada plano:
    for(int i = 0; i < nx; i++){
        //if que garante a continuidade dos endereços:
        if(i != 0){
            v[i][0] = v[i-1][ny-1] + nz;
        }
        for(int j = 1; j < ny; j++){
            v[i][j] = v[i][j-1] + nz;
        }
    }

    //PREENCHENDO A MATRIZ:
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                v[i][j][k] = cont;
                cont ++;
            }
        }
    }

    //IMPRIMINDO VALORES DA MATRIZ:
    for(int i = 0; i < nx; i++){
        for(int j = 0; j < ny; j++){
            for(int k = 0; k < nz; k++){
                cout << v[i][j][k] << ", ";
            }
        }
    }
    //LIBERAÇÃO DE MEMÓRIA UTILIZADA PELA MATRIZ:
    delete[] v[0][0];
    delete[] v[0];
    delete[] v;

    return 0;
}