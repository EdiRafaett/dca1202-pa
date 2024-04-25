#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
 float x, y; //variáveis privadas da classe vetor
public:
 //Construtor sem argumentos:
  //  Vetor();
    //Vetor construtor com argumentos
    Vetor(float mx = 0, float my = 0);
//Chamada do destrutor:
    ~Vetor();

    void setX(float mx);
    void setY(float my); //funções públicas da classe vetor
    float getX(void);
    float getY(void);
};

#endif // VETOR_H
