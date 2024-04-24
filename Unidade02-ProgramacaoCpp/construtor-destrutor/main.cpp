#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
    Vetor v1, v2, v3(7,8);
    Vetor v4(3);
    cout << "v1.x= " << v1.getX() << endl;
    cout << "v1.y= " << v1.getY() << endl;
    /*Note que os cout vinheram antes de serem definidos seus valores
    porém o construtor definiu que x e y dos vetores seriam criados com valro inical zero*/

    // Maneira não interessante de criar objetos
    v1.setX(3); v1.setY(4);
    v2.setX(5); v2.setY(6);
    return 0;
}
