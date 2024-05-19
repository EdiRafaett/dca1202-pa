#ifndef ESCULTORDIGITAL_H
#define ESCULTORDIGITAL_H
#include <opencv2/opencv.hpp>

/**
 * @brief A classe voxel representa os parâmetros necessários para a criação de um voxel.
 * @details Cada Voxel é um cubo no espaço. Pode-se dizer que um voxel é um pixel na terceira dimensão
 */
struct Voxel {
    /**
     * @brief r, representa a componente vermelha do voxel.
     */
    float r;
    /**
     * @brief g, representa a componente verde do voxel.
     */
    float g;
    /**
     * @brief b, representa a componente azul do voxel.
     */
    float b; // Cores
    /**
     * @brief a, representa a transparência do voxel que vai de zero a um. Quanto mais próximo de zero mais transparente.
     */
    float a; // Transparencia
    /**
     * @brief show, pode assumir verdadeiro o falso. Se verdadeiro o voxel será mostrado, se falso o voxel não é mostrado.
     */
    bool show; // Incluido ou nao o voxel
};

/**
 * @brief A classe Sculptor engloba todos os métodos necessários para a criação de um espaço 3D, onde será gerada uma escultura de voxels.
 */
class Sculptor {
private:
    /**
     * @brief v é um ponteiro para ponteiro do tipo Voxel para a criação de uma matriz 3D.
     */
    Voxel ***v; // 3D matrix
    /**
     * @brief nx, é a vaiável que recebe o tamanho da dimensão x.
     */
    int nx; //Dimensão x
    /**
     * @brief ny, é a vaiável que recebe o tamanho da dimensão y.
     */
    int ny; // Dimensão y
    /**
     * @brief nz, é a vaiável que recebe o tamanho da dimensão z.
     */
    int nz; // Dimensão z
    /**
     * @brief r, é a variável que recebe o valor da componente vermelha.
     */
    float r;
    /**
     * @brief g, é a variável que recebe o valor da componente verde.
     */
    float g;
    /**
     * @brief b, é a variável que recebe o valor da componente azul.
     */
    float b;
    /**
     * @brief a, é a variável que recebe o valor da transparência.
     */
    float a; // cores e transparência
public:
    /**
     * @brief Sculptor, é o construtor da classe.
     * @param _nx é o valor recebido para a dimensão x.
     * @param _ny é o valor recebido para a dimensão y.
     * @param _nz é o valor recebido para a dimensão z.
     */
    Sculptor(int _nx, int _ny, int _nz); //Construtor da classe
    /**
     * @brief ~Sculptor é o destrutor da classe.
     */
    ~Sculptor();
    /**
     * @brief setColor é o método responsável pela cor e transparência dos voxels.
     * @param r recebe o valor da componente de cor vermelha do voxel.
     * @param g recebe o valor da componente de cor verde do voxel.
     * @param b recebe o valor da componente de cor azul do voxel.
     * @param a recebe o valor da  transparência do voxel.
     */
    void setColor(float r, float g, float b, float a);
    /**
     * @brief putVoxel é o método responsável pela ativação de um voxel.
     * @param x recebe a coordenada x onde esse voxel deve ser ativado.
     * @param y recebe a coordenada y onde esse voxel deve ser ativado.
     * @param z recebe a coordenada z onde esse voxel deve ser ativado.
     */
    void putVoxel(int x, int y, int z);
    /**
     * @brief cutVoxel é o método responsável pelo desligamento de um voxel.
     * @param x recebe a coordenada x onde esse voxel deve ser desativado.
     * @param y recebe a coordenada y onde esse voxel deve ser desativado.
     * @param z recebe a coordenada z onde esse voxel deve ser desativado.
     */
    void cutVoxel(int x, int y, int z);
    /**
     * @brief putBox é o método responsável pela ativação de um cubo composto por vários voxels.
     * @param x0 recebe a coordenada x apartir de onde os voxels devem ser ativados
     * @param x1 recebe a coordenada x até onde os voxels devem ser ativados.
     * @param y0 recebe a coordenada y apartir de onde os voxels devem ser ativados.
     * @param y1 recebe a coordenada y até onde os voxels devem ser ativados.
     * @param z0 recebe a coordenada z apartir de onde os voxels devem ser ativados
     * @param z1 recebe a coordenada z até onde os voxels devem ser ativados.
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief cutBox é o método responsável pela desativação de um cubo composto por vários voxels.
     * @param x0 recebe a coordenada x apartir de onde os voxels devem ser desativados
     * @param x1 recebe a coordenada x até onde os voxels devem ser desativados.
     * @param y0 recebe a coordenada y apartir de onde os voxels devem ser desativados.
     * @param y1 recebe a coordenada y até onde os voxels devem ser desativados.
     * @param z0 recebe a coordenada z apartir de onde os voxels devem ser desativados
     * @param z1 recebe a coordenada z até onde os voxels devem ser desativados.
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief putSphere é o método responsável pela ativação de uma esfera de voxels.
     * @param xcenter recebe a coordenada x do centro da esfera.
     * @param ycenter recebe a coordenada y do centro da esfera.
     * @param zcenter recebe a coordenada z do centro da esfera.
     * @param radius recebe o tamanho do raio da esfera.
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief cutSphere é o método responsável pela desativação de uma esfera de voxels.
     * @param xcenter recebe a coordenada x do centro da esfera.
     * @param ycenter recebe a coordenada y do centro da esfera.
     * @param zcenter recebe a coordenada z do centro da esfera.
     * @param radius recebe o tamanho do raio da esfera.
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief putEllipsoid é o método responsável pela ativação de uma elipsóide de voxels.
     * @param xcenter recebe a coordenada x do centro da elipsoide.
     * @param ycenter recebe a coordenada y do centro da elipsoide.
     * @param zcenter recebe a coordenada z do centro da elipsoide.
     * @param rx recebe o tamanho do raio para o eixo x.
     * @param ry recebe o tamanho do raio para o eixo y.
     * @param rz recebe o tamanho do raio para o eixo z.
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief cutEllipsoid é o método responsável pela desativação de uma elipsoide de voxels.
     * @param xcenter recebe a coordenada x do centro da elipsoide.
     * @param ycenter recebe a coordenada y do centro da elipsoide.
     * @param zcenter recebe a coordenada z do centro da elipsoide.
     * @param rx recebe o tamanho do raio para o eixo x.
     * @param ry recebe o tamanho do raio para o eixo y.
     * @param rz recebe o tamanho do raio para o eixo z.
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief writeOFF é o método responsável pela geração de um arquivo de saída no formato OFF.
     * @param filename recebe o nome do arquivo de saída.
     */
    void writeOFF(const char* filename);
    /**
     * @brief putTextureOnSphere é o método responsável pela ativação de uma esfera de voxels e aplicação das cores de uma imagem (textura) nessa esfera.
     * @param xcenter recebe a coordenada x do centro da esfera.
     * @param ycenter recebe a coordenada y de centro da esfera.
     * @param zcenter recebe a coordenada z de centro da esfera.
     * @param radius recebe o tamanho do raio da esfera.
     * @param image recebe a imagem que terá suas cores projetadas na esfera.
     */
    void putTextureOnSphere(int xcenter, int ycenter, int zcenter, int radius, cv::Mat &image); //CASCA E TEXTURA

};

#endif // ESCULTORDIGITAL_H
