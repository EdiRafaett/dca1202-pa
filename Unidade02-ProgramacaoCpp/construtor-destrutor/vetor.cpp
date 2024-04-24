#include "vetor.h"
#include <iostream>

using namespace std;

//Vetor::Vetor(){
  //  x = y = 0;
    //cout << "chamada do construtor" << endl; //só para mostrar a chamada do construtor
//}

Vetor::~Vetor(){
    cout << "destrutor da classe" << endl;
}

Vetor::Vetor(float mx, float my){
    x = mx; y = my;
    cout << "construtor com argumento" << endl;
}
void Vetor::setX(float mx){
    x = mx;
}

void Vetor::setY(float my){
    y = my;
}

float Vetor::getX(){
    return x;
}
float Vetor::getY(){
    return y;
}
