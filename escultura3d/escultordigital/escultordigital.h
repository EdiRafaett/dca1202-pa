#ifndef ESCULTORDIGITAL_H
#define ESCULTORDIGITAL_H
#include <opencv2/opencv.hpp>

struct Voxel {
    float r,g,b; // Cores
    float a; // Trasnparencia
    bool show; // Incluido ou nao
};

class Sculptor {
private:
    Voxel ***v; // 3D matrix
    int nx,ny,nz; // Dimensions
    float r,g,b,a; // cores e transparência
public:
    Sculptor(int _nx, int _ny, int _nz); //Construtor da classe
    ~Sculptor();
    void setColor(float r, float g, float b, float a);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    //void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void writeOFF(const char* filename);
    void putTextureOnSphere(int xcenter, int ycenter, int zcenter, int radius, cv::Mat &image); //CASCA E TEXTURA

};

#endif // ESCULTORDIGITAL_H
