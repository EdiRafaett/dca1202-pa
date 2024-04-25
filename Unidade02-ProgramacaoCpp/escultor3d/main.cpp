#include <iostream>
#include "sculptor.h"

using namespace std;

int main(){
    Sculptor escultura(100, 100, 100);
    escultura.setColor(1, 1, 1, 1); //cores e trnsparencia
    escultura.putVoxel(0.5, 0.5, 0.5); // coordenadas
    return 0;
}
