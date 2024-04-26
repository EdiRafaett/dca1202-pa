#include <iostream>

using namespace std;

//criando uma matriz 3d:
int main(){
    int ***v, nx = 3, ny = 3, nz = 3;
    v = new int**[nx]; // Guarda onde começa cada plano da matriz
    v[0] = new int*[nx*ny]; // Guarda onde começa cada linha da matriz
    v[0][0] = new int [nx*ny*nz]; // todos as possiveis posições da matriz






}
