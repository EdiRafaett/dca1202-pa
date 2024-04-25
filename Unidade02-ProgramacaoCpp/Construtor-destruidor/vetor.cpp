#include "vetor.h"
#include <iostream>
using namespace std;

/*Vetor::Vetor(){
    x = y = 0;
    cout << "chamada do construtor" << endl;
} */

Vetor::~Vetor(){
    cout << "chamada do destrutor" << endl;
}

Vetor::Vetor(float mx, float my){
    x = mx;
    y = my;
    cout << "chamada do construtor" << endl;
}

void Vetor::setX(float mx){ //mx é a variável que recebe o valor de setX
    x = mx; //aqui x recebe o valor de mx
}

void Vetor::setY(float my){ //my é a variável que recebe o valor de setY
    y = my; //Aqui y recebe o valor de my
}

float Vetor::getX(){
    return x; //Retorno do valor armazenado em x

}
float Vetor::getY(){
    return y; //Retorno do valor armazenado em y
}
