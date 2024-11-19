#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, *vetor;

    // Lê o tamanho do vetor
    scanf("%d", &tamanho);

    // Verifica se o vetor é vazio
    if (tamanho <= 0) {
        printf("[vazio]\n");
        return 0;
    }

    // Aloca dinamicamente a memória para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê os dados do vetor
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Apresenta os dados do vetor
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(",");
        }
    }
    printf("]\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}
