#include <iostream>
#include "sculptor.h"

using namespace std;

int main(){
    Sculptor escultura(100, 100, 100);
   escultura.putVoxel(0, 0, 0); // coordenadas
   escultura.putVoxel(99, 99, 99); // coordenadas
    //pernas
    escultura.setColor(0, 0, 1, 1); //cores e transparencia
    escultura.putBox(25, 30, 10, 22, 25, 33);
    escultura.putBox(31, 36, 10, 22, 25, 33);
    //botas:
    escultura.setColor(0.3, 0.3, 0.3, 1);
    escultura.putBox(25, 30, 8, 10, 25, 33);
    escultura.putBox(31, 36, 8, 10, 25, 33);
    //tronco da Camisa:
    escultura.setColor(0.5, 0.8, 0.7, 1);
    escultura.putBox(25, 36, 22, 32, 25, 33);
    //ombros da camisa:
    escultura.putBox(21, 40, 32, 36, 25, 33);
    //Braços:
    escultura.setColor(0.6, 0.5, 0.4, 1);
    escultura.putBox(21, 24, 22, 32, 25, 33);//direito
    escultura.putBox(37, 40, 22, 32, 25, 33); //Esquerdo

    escultura.writeOFF((char *) "/home/rafaett/arquivosoff/saida.off");
    return 0;
}
