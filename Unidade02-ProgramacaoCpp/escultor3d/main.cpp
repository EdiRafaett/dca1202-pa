#include <iostream>
#include "sculptor.h"

using namespace std;

int main(){
    Sculptor escultura(100,100,100);
    //escultura.putVoxel(0, 0, 0); // coordenadas
   // escultura.putVoxel(99, 99, 99); // coordenadas

    escultura.setColor(0, 0, 1, 1);
    escultura.putSuperficiesphere(50,50,50,50);
    //escultura.cutSphere(180, 180, 180, 179);
    escultura.writeOFF((char *) "/home/rafaett/arquivosoff/saida.off");
    return 0;
}
