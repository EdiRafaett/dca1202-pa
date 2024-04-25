/*Arquivos de implementação (.cpp):
 * Estes são onde você realmente define as funções e classes
 * declaradas nos arquivos de cabeçalho.
 * Eles contêm a implementação real do código.*/

#include "vetor2d.h"
void Vetor2d::SetX(float x_){
    if(x_ > 0){
        x =x_;
    }
    else {
        x = 0;
    }
}
float Vetor2d::getX(void){
    return x;
}
