#include <iostream>
#include "sculptor.h"

using namespace std;

int main(){
    Sculptor escultura(100, 100, 100);
    escultura.setColor(1, 1, 1, 1); //cores e trnsparencia
    escultura.putVoxel(1, 1, 1); // coordenadas
    return 0;
}
