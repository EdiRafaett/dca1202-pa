#ifndef ESCULTORDIGITAL_H
#define ESCULTORDIGITAL_H
#include <opencv2/opencv.hpp>

/**
 * @brief A classe voxel representa os parametros necessários para a criação de um voxel
 * @details Cada Voxel é um cubo no espaço. Pode-se dizer que um voxel é um pixel na terceira dimensão
 */
struct Voxel {
    /**
     * @brief r representa o tom de vermelho do voxel.
     */
    float r;
    /**
     * @brief g representa do tom de verde do voxel.
     */
    float g;
    /**
     * @brief b representa o tom de azul do voxel.
     */
    float b; // Cores
    /**
     * @brief a, representa a transparência do voxel que vai de zero a um. Quanto mais próximo de zero mais transparente.
     */
    float a; // Trasnparencia
    /**
     * @brief show pode assumir verdadeiro o falso. Sver verdadeiro o voxel será mostrado, se falso o voxel não é mostrado.
     */
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
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void writeOFF(const char* filename);
    void putTextureOnSphere(int xcenter, int ycenter, int zcenter, int radius, cv::Mat &image); //CASCA E TEXTURA

};

#endif // ESCULTORDIGITAL_H
