#include "sculptor.h" //Inclusão de declaração da classe
#include <iostream>

using namespace std;

/*-------------------------------------------------------------------------------*/
//IMPLEMENTAÇÃO DO CONSTRUTOR DA CLASSE:
Sculptor::Sculptor(int _nx, int _ny, int _nz) { //parametro da função

    //Passagem dos valores dos parametros para as variáveis privadas:
    nx = _nx;
    ny = _ny;
    nz = _nz;

    // Atribuindo zero as  variáveis de cores e transparencia protect:
    r = 0;
    g = 0;
    b = 0;
    a = 0;

    //Declarando incrementadores dos laços:
    int i, j, k;

    //ALOCANDO MEMÓRIA 3D:
    //Alocando memória para o array auxiliar que receberá endereços das linhas onde inicia-se cada plano:
    v = new Voxel **[nx];
    //Alocando memória para o array que receberá o endereço do voxel de inicio de cada linha:
    v[0] = new Voxel *[nx * ny];
    //Alocando memória  para todos os voxels da matriz:
    v[0][0] = new Voxel [nx * ny * nz];
    //Passando os endereços de inicio de cada plano para o array auxiliar:
    for (i = 1; i < nx; i++){
        v[i] = v[i - 1] + ny;
    }
    //Passando os endereços dos voxels de início de cada linha de cada plano:
    for(i = 0; i < nx; i++){
        if(i != 0){
            v[i][0] = v[i - 1][ny - 1] + nz;
        }
        for (j = 1; j < ny; j++){
            v[i][j] = v[i][j - 1] + nz;
        }
    }

    //Iniciando os voxels com cores e transparencia zero e estado false:
    for(i = 0; i < nx; i++){
        for (j = 0; j < ny; j++){
            for (k = 0; k < nz; k++){
                this -> v[i][j][k].r = this -> r;
                this -> v[i][j][k].g = this -> g;
                this -> v[i][j][k].b = this -> b;
                this -> v[i][j][k].a = this -> a;
                this -> v[i][j][k].show = false;
            }
        }
    }
}

/*--------------------------------------------------------------------------*/

//IMPLEMENTO DO DESTRUIDOR DE CLASSES:
Sculptor::~Sculptor(){
    delete[] v[0][0];
    delete[] v[0];
    delete[] v;
}

/*-------------------------------------------------------------------------*/

//IMPLEMENTAÇÃO DO SETCOLOR:
void Sculptor::setColor(float r, float g, float b, float a){
    //r,g,b,a protegidos recebendo os valores dos parametros:
    this -> r = r;
    this -> g = g;
    this -> b = b;
    this -> a = a;
}

/*--------------------------------------------------------------------------*/

//IMPLEMENTAÇÃO DO PUTVOXEL (ATIVAÇÃO DE VOXEL):
void Sculptor::putVoxel(int x, int y, int z){
    /*Condição que checa se os valores dos parametros estão dentro
    dos valores válidos para nx, ny, nz */
    if((this -> nx >x) && (this -> ny >y) && (this -> nz > z )){
        this -> v[x][y][z].show = true;
        this -> v[x][y][z].r;
        this -> v[x][y][z].g;
        this -> v[x][y][z].b;
        this -> v[x][y][z].a;
        /*Se a condição for verdadeira o voxel tem cores
        transparencia atribuidos e estado ligado */
    }
}

/*--------------------------------------------------------------------*/

//IPLEMENTAÇÃO DO CUTVOXEL (DESATIVAÇÃO DE VOXEL)
void Sculptor::cutVoxel(int x, int y, int z){
    if((this -> nx >x) && (this -> ny >y) && (this -> nz > y)){
        this -> v[x][y][z].show = false;
    }
}

/*---------------------------------------------------------------------*/
//IMPLEMENTAÇÃO DO WRITHOFF:
//void Sculptor::writeOFF(const char *filename){
    //int i, j, k, n_voxels; //contadores de iteração
    //int n_verticies; //contador de verticies
    //ofstream fout; //Objeto para fluexo de saida
    //fout.open(filename)

//}
//CONTINUAR A IMPLEMENTAÇÃO DO WRITHOFF

