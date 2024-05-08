# Projeto da Unidade 02 - Escultura 3D de Planetas em Voxels
Este projeto foi proposto pelo Professor Agostinho como parte da Unidade 02 do curso, com o objetivo de proporcionar uma compreensão abrangente e divertida sobre a construção de classes em C++ para manipulação de objetos tridimensionais. Neste contexto, a turma foi desafiada a implementar diversos métodos de uma classe para a construção de uma escultura 3D formada por Voxels.

## Descrição do Projeto
Meu projeto consiste em criar uma representação tridimensional de planetas utilizando Voxels (elementos semelhantes a pixels tridimensionais). Cada planeta é mapeado a partir de uma imagem 2D no formato equiretangular, onde as cores dos pixels da imagem são atribuídos aos voxels que compõem uma esfera no espaço.

Para implementar essa funcionalidade, foi utilizado uma variação do algoritmo Putsphire, que é responsável por gerar uma esfera. 
Esse  novo algoritmo converte as coordenadas cartesianas da esfera em coordenadas esféricas, permitindo assim a atribuição das cores RGB dos pixels da imagem aos voxels correspondentes em todas as camadas da esfera. Posteriormente, o método da classe Cutsphire é utilizado para desativar os voxels no interior da esfera, mantendo apenas a superfície colorida.

## Estrutura de Arquivos
É possível gerar a visualização de novos planetas sendo necessário apenas encontrar sua textura 2D no formato equiretangular e adicionar no diretório "imagens"
Posteriormente alterar o nome do planeta no caminho que leva até a imagem no arquivo main.cpp.
No diretório "saidasoff" estão disponíveis os arquivos prontos de todos os planetas, assim como do Sol e da Lua, no formato .off previamente gerados. Caso seja gerada a representação de um novo planeta o arquivo referente .off estrá nomeado com "saida.off" no mesmo diretório.
