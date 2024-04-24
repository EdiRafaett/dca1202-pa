#include <stdio.h>
#include <stdlib.h>

//criação da função soma de vetores com parametros que apontam para o mesmo lugar que varáveis na main:
void soma_vetores(int *vet1, int *vet2, int *vet3, int n) {
    for (int i = 0; i < n; i++) {
        vet3[i] = vet1[i] + vet2[i]; // APRENDIZADO: vet3 aponta para o mesmo endereço de v3 assim como vet2 para v2 e vet1  para v1
    }
}

int main() {
    int *v1, *v2, *v3, n, i;
    // Solicitando tamanho dos vetores:
    printf("Tamanho dos vetores a serem somados:");
    scanf("%d", &n);    
    // Alocando memória para os vetores:
    v1 = malloc(n * sizeof(int));
    v2 = malloc(n * sizeof(int));
    v3 = malloc(n * sizeof(int));
    //Preenchendo os vetores
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d do vetor1:", (i + 1));
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d do vetor2:", (i + 1));
        scanf("%d", &v2[i]);
    }
    //chamando a função:
    soma_vetores(v1, v2, v3, n);
    printf("Soma de vetores: [ ");
    //imprimindo os valores do vetor soma:
    for (i = 0; i < n; i++) {
        printf("%d ", v3[i]);
    }
    printf("]\n");

    // Liberando memória alocada
    free(v1);
    free(v2);
    free(v3);

    return 0;
}
