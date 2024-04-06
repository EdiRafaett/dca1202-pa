#include <stdio.h>

// Função para converter um número decimal para binário
void decimalParaBinario(int dec, int *binario) {
    int resto, i = 0;

    // Convertendo dec para binário
    while (dec > 0) {
        resto = dec % 2;
        binario[31 - i] = resto; // Armazena o bit no índice correspondente, começando do bit menos significativo
        dec = dec / 2;
        i++;
    }
}

int main() {
    int dec, binario[32] = {0}; // Inicializa o vetor com zeros

    printf("Número decimal que deseja converter: ");
    scanf("%d", &dec);

    // Chama a função para converter decimal para binário, passando o ponteiro para o array binario
    decimalParaBinario(dec, binario);

    // Agora você pode usar o array 'binario' conforme necessário na main
    printf("O número em binário é: ");
    for (int j = 0; j < 32; j++) { // Imprime o número binário
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}
