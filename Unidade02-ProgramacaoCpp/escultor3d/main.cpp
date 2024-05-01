#include <iostream>
#include "sculptor.h"
#include <opencv2/opencv.hpp>


using namespace std;

int main(){
    Sculptor escultura(150, 150, 150);
    cv::Mat image;

   // escultura.setColor(0, 0, 1, 1);
    image = cv::imread("/home/rafaett/variados/2kearth.jpg");
    escultura.putTextureOnSphere(45, 45, 45, 45, image);
    escultura.cutSphere(45, 45, 45, 44);

    //Criação da lua:
    image = cv::imread("/home/rafaett/variados/lua.jpg"); //abrindo o arquivo de imagem da lua
    escultura.putTextureOnSphere(130, 130, 130, 20, image);
    escultura.cutSphere(130, 130, 130, 19);

    escultura.writeOFF((char *) "/home/rafaett/arquivosoff/saida.off");

    return 0;
}
