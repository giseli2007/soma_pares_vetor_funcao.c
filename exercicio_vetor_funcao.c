#include <stdio.h>

int somaPares(int vetor[]) { // declaração da função somaPares
    int i; // variável de controle do loop
    int soma = 0; // variável que armazena a soma dos números pares

    for (i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            soma += vetor[i];
        }
    }
    return soma; // retorno da soma fora do laço
}

int main(void) {
    int vetor[5]; // declaração do vetor de inteiros com 5 posições
    int i, resultado;

    printf("Digite 5 números inteiros: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    resultado = somaPares(vetor); // chamada correta da função
    printf("A soma dos números digitados que são pares é: %d\n", resultado);

    return 0;
}