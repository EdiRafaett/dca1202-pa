/*Arquivo principal (main.cpp): Este é o arquivo onde a execução do programa começa.
 *Ele incluirá os arquivos de cabeçalho necessários
 *e chamará as funções ou instanciará as classes definidas nos outros arquivos.*/

#include <iostream>
#include "vetor2d.h"
int main(){
    Vetor2d v;
    v.SetX(3);
    std::cout << v.getX() << std::endl;
    return 0;
}
