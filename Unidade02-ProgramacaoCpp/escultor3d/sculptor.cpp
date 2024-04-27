#include "sculptor.h" //Inclusão de declaração da classe
#include <iostream>
#include <cmath>
#include <fstream> //inclusão de fluxo para arquivos
#include <cstdlib> //inclusão da função exit

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
        this -> v[x][y][z].r = this -> r;
        this -> v[x][y][z].g = this -> g;
        this -> v[x][y][z].b = this -> b;
        this -> v[x][y][z].a = this -> a;
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
/*-----------------------------------------------------------------------*/
// IMPLEMENTAÇÃO DO PUTBOX:
void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    int i, j, k;

    if((this -> nx >= x0 && this -> nx >= x1) && (this -> ny >= y0 && this -> ny >= y1 ) && (nz >= z0 && this -> nz >= z1)){
        for(i = x0; i < x1; i++){
            for(j = y0; j < y1; j++){
                for(k = z0; k < z1; k++){
                    this -> v[i][j][k].show = true;
                    this -> v[i][j][k].r = this -> r;
                    this -> v[i][j][k].g = this -> g;
                    this -> v[i][j][k].b = this -> b;
                    this -> v[i][j][k].a = this -> a;
                }
            }
        }
    }
}

/*---------------------------------------------------------------------*/

//IMPLEMENTAÇÃO DO WRITHOFF:
void Sculptor::writeOFF(const char *filename){
    int i, j, k, n_voxels = 0; //contadores de iteração
    int n_verticies; //contador de verticies
    ofstream fout; //Objeto para fluxo de saida
    fout.open(filename);
    //Verificação da abertura do fluxo
    if(!fout.is_open()){
        cout << "O arquivo não pôde ser aberto" << endl;
        exit(1);
    }

    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k <nz; k++){
                if(v[i][j][k].show == true){
                    n_voxels = n_voxels + 1;
                }

            }
        }
    }

    fout << "OFF" << endl;
    fout << n_voxels*8 << " " << n_voxels*6 << " " << n_voxels*0 << endl;

    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k <nz; k++){
                if(v[i][j][k].show == true){
                    fout << i - 0.5 << " " << j + 0.5 << " " << k - 0.5 << endl;
                    fout << i - 0.5 << " " << j - 0.5 << " " << k - 0.5 << endl;
                    fout << i + 0.5 << " " << j - 0.5 << " " << k - 0.5 << endl;
                    fout << i + 0.5 << " " << j + 0.5 << " " << k - 0.5 << endl;
                    fout << i - 0.5 << " " << j + 0.5 << " " << k + 0.5 << endl;
                    fout << i - 0.5 << " " << j - 0.5 << " " << k + 0.5 << endl;
                    fout << i + 0.5 << " " << j - 0.5 << " " << k + 0.5 << endl;
                    fout << i + 0.5 << " " << j + 0.5 << " " << k + 0.5 << endl;
                }
            }
        }
    }
    n_voxels = 0;
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k <nz; k++){
                if(v[i][j][k].show == true){
                    n_verticies = n_voxels * 8;
                    fout << "4" << " " << n_verticies + 0 << " " << n_verticies +1 << " " << n_verticies + 2 << " " << n_verticies + 3 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << "4" << " " << n_verticies + 4 << " " << n_verticies +5 << " " << n_verticies + 6 << " " << n_verticies + 7 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << "4" << " " << n_verticies + 0 << " " << n_verticies +4 << " " << n_verticies + 5 << " " << n_verticies + 1 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << "4" << " " << n_verticies + 0 << " " << n_verticies +3 << " " << n_verticies + 7 << " " << n_verticies + 4 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << "4" << " " << n_verticies + 3 << " " << n_verticies +2 << " " << n_verticies + 6 << " " << n_verticies + 7 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << "4" << " " << n_verticies + 1 << " " << n_verticies +5 << " " << n_verticies + 6 << " " << n_verticies + 2 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    n_voxels = n_voxels +1;
                }

            }
        }
    }
    fout.close();
}



