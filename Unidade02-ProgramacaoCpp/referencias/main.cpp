#include <iostream>

using namespace std;

// Passagem do parâmetro por referência
// Incluir "&" antes da variável
void funcao(int &x){
    cout << "endereço de x = " << &x << endl;
    cout << "Valor de x = " << x << endl;
    x = 4;
    cout << "Novo valor de x = " << x << endl;
}

int main(){
    int y = 3;
    cout << "Endereço de y = " << &y << endl;
    cout << "Valor de Y = " << y << endl;
    funcao(y);
    cout << "Novo valor de y = " << y << endl;
    return 0;
}

//Diferentemente da passagem de valor por ponteiros, a passagem por referência
//permine que um valor que está em uma determinada posição de memória seja
// chamado de x ou de y... o valor e posição na memória é o mesmo, porém pode
// ser usada e modificada pelos 2.
