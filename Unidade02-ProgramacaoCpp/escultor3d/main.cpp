#include <iostream>
#include "sculptor.h"

using namespace std;

int main(){
    Sculptor escultura(100, 100, 100);
    escultura.setColor(1, 0, 0, 1); //cores e trnsparencia
    escultura.putVoxel(0, 0, 0); // coordenadas
    escultura.setColor(1, 0, 0, 1); //cores e trnsparencia
    escultura.putVoxel(1, 1, 1); // coordenadas
    escultura.setColor(1, 0, 0, 1); //cores e trnsparencia
    escultura.putVoxel(2, 2, 2); // coordenadas

    escultura.writeOFF((char *) "/home/rafaett/arquivosoff/saida.off");
    return 0;
}
