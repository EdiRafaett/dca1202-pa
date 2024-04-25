/* Esses arquivos contêm declarações de classes, funções e variáveis que serão
 * usadas em outros arquivos. Eles fornecem uma interface para o código
 * contido nos arquivos de implementação (.cpp).*/

#ifndef VETOR2D_H
#define VETOR2D_H
class Vetor2d{
private:
    float x, y;
public:
    void SetX(float x_);
    float getX(void);
};

#endif // VETOR2D_H
