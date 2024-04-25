#include <iostream>
#include "vetor.h"
using namespace std;

int main(){
    Vetor v1, v2, v3(4,3), v4(3) ;
    v1.setX(3); v1.setY(4); //Passando valores para as funções setX e setY
    return 0;
}

/* Note que o vetor 1 está tendo seus valores alterados manualmente. Isso não
é nada viável nem produtivo, uma colução pra isso é o uso de contrutores.
Quando o construtor é chamado automáticamente ele inicia os objetos v1 e v2 com zeros
e o destrutor limpa isso depois.
Porém existe o construtor com argumentos que basicamente permite que seja passado valores
para os objetos na criação, assim como definir valores iniciais para aqueles que
não tiverem. Para isso não precisaremos usar o vator construtor sem argumentos nesse momento
Como podemos ver o construtor com argumentos pode setar um valor definido para
os objetos que ainda não tem, note também que v4 só tinha arumento na posição x
logo o vetor construtor foi chmado para ele e preencheu a posição y que estava faltando.*/
