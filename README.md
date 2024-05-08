# Projeto da Unidade 02 - Escultura 3D de Planetas em Voxels
Este projeto foi proposto pelo Professor Agostinho como parte da Unidade 02 do curso, com o objetivo de proporcionar uma compreensão abrangente e divertida sobre a construção de classes em C++ para manipulação de objetos tridimensionais. Neste contexto, a turma foi desafiada a implementar diversos métodos de uma classe para a construção de uma escultura 3D formada por Voxels.

## Descrição do Projeto
O projeto consiste em criar uma representação tridimensional de planetas utilizando a técnica de Voxels. Cada planeta é mapeado a partir de uma imagem no formato equiretangular, onde os pixels da imagem são atribuídos aos voxels que compõem uma esfera no espaço.

Para implementar essa funcionalidade, foi utilizado uma variação do algoritmo Putsphire. Esse algoritmo converte as coordenadas cartesianas da esfera em coordenadas esféricas, permitindo assim a atribuição das cores RGB dos pixels da imagem aos voxels correspondentes em toda a superfície da esfera. Posteriormente, o algoritmo Cutsphire é utilizado para remover o interior da esfera, mantendo apenas a superfície colorida.

## Estrutura de Arquivos
Na pasta saidasoff, estão disponíveis os arquivos prontos de todos os planetas, assim como do Sol e da Lua, no formato .off.
