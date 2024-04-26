#include "sculptor.h" //Inclusão de declaração da classe
#include <iostream>

using namespace std;

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

    //Alocando a matriz 3D:
    v = new Voxel **[nx]; //Alocação de nx blocos (ponteiro para ponteiro)
    for (i = 0; i < nx; i++){
        v[i] = new Voxel *[ny]; //Alocação de ny blocos (ponteiro)
    }

    for(i = 0; i < nx; i++){
        for (j = 0; j < ny; j++){
            v[i][j] = new Voxel [nz]; //Alocação de nz blocos
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

    //Declarando incrementadores dos laços:
    int i, j;

    //Liberação da matriz 3D:
    for(i = 0; i < nx; i++){
        for (j = 0; j < ny; j++){
            delete[] v[i][j]; //liberação da última alocação
        }
    }

    for(i = 0; i < nx; i++){
        delete[] v[i]; //liberação da penúltima alocação
    }
    delete[] v; //liberação da ultima alocação
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

//IMPLEMENTAÇÃO DO PUTVOXEL (ATIVAÇÃO De VOXEL):
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


