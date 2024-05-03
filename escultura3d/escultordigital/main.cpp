#include <iostream>
#include "escultordigital.h"
#include <opencv2/opencv.hpp>


using namespace std;

int main(){
    Sculptor escultura(300, 300, 300);
    cv::Mat image;
    string filename;

    //CHAMADA DE TEXTURA:
    //Caminho das imagens e nome do planeta desejado ("planeta_desejado.jpg")
    filename = "/home/rafaett/dca1202-pa/escultura3d/imagens/terra.jpg";
    image = cv::imread(filename);

    //Criação da casca esférica:
    escultura.putTextureOnSphere(100, 100, 100, 45, image);
    escultura.cutSphere(100, 100, 100, 44); //remoção da parte interna da esfera

    //condição criada para aneis de saturno:
    if(filename.find ("saturno.jpg")!= std::string::npos){ //Se o final do caminho armazenado na string termina com saturno, os aneis devem ser carregados.

        //ANEIS DE SATURNO:
        //Aneis externos:
        escultura.setColor(0.545, 0.271, 0.075, 0.3);
        escultura.putEllipsoid(100, 100, 100, 100, 80, 1);
        escultura.cutEllipsoid(100, 100, 100, 85, 75, 1);
        //Aneis médios:
        escultura.setColor(0.545, 0.353, 0.169, 0.2);
        escultura.putEllipsoid(100, 100, 100, 95, 75, 1);
        escultura.cutEllipsoid(100, 100, 100, 75, 65, 1);
        //Aneis internos:
        escultura.setColor(0.396, 0.263, 0.129, 0.1);
        escultura.putEllipsoid(100, 100, 100, 85, 65, 1);
        escultura.cutEllipsoid(100, 100, 100, 65, 55, 1);
    }



    //Chamada do método para gravação no arquivo no caminho especificado:
    escultura.writeOFF((char *) "/home/rafaett/dca1202-pa/escultura3d/saidasoff/saida.off");

    return 0;
}
