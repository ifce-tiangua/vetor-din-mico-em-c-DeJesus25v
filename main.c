#include <stdio.h>
#include <stdlib.h>

// Função principal
int main() {
    int tamanho, *vetor;

    // Entrada: Lê o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    if (scanf("%d", &tamanho) != 1 || tamanho < 0) {
        printf("Entrada inválida. O tamanho deve ser um número inteiro não negativo.\n");
        return 1;
    }

    // Verifica se o vetor é vazio
    if (tamanho == 0) {
        printf("[vazio]\n");
        return 0;
    }

    // Aloca dinamicamente a memória para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        fprintf(stderr, "Erro: não foi possível alocar memória.\n");
        return 1;
    }

    // Entrada: Lê os elementos do vetor
    printf("Digite os %d elementos do vetor: ", tamanho);
    for (int i = 0; i < tamanho; i++) {
        if (scanf("%d", &vetor[i]) != 1) {
            fprintf(stderr, "Erro: entrada inválida para os elementos do vetor.\n");
            free(vetor); // Libera a memória antes de sair
            return 1;
        }
    }

    // Saída: Apresenta os dados do vetor no formato esperado
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(",");
        }
    }
    printf("]\n");

    // Desaloca a memória
    free(vetor);

    return 0;
}
