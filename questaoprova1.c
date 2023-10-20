#include <stdio.h>

int main() {
    int tam, i, flag, aux;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetor[tam];

    for (i = 0; i < tam; i++) {
        printf("Preencha o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    flag = 1;

    while (flag) {
        flag = 0;
        for (i = 0; i < tam - 1; i++) { 
            if (vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                flag = 1;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (i = 0; i < tam; i++) {
        printf("|%d|", vetor[i]);
    }
    printf("\n");

    return 0;
}