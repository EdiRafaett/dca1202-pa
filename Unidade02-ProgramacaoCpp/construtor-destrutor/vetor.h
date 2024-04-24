#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
    float x, y;
public:
    //Método construtor defaut (padrão), não tem retorno e é chamada automáticamente
   // Vetor(); //mesmo nome da classe
    //Destuidor
    ~Vetor();
    //Método contrutor com argumentos (é chamada no momento que eu crio o objeto já lhe passando valores que e o caso de v3
    Vetor(float mx = 0, float my = 0);

    /*Como pode ser visto acima o vetor construtor com argumentos substituiu
    p vetor construtor sem argumentos. NOte também que o construtor com
argumentos foi capaz de definir o valor zero para o y de v4 que não tinha.*/

    void setX(float mx);
    void setY(float my);
    float getX(void);
    float getY(void);
};

#endif // VETOR_H
