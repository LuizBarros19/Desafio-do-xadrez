#include <stdio.h>

int main() {
    // O "valor zero da variável é considerado a casa atual" é interpretado
    // como uma posição inicial abstrata. Não rastrearemos coordenadas numéricas,
    // apenas simularemos a sequência de descrições de movimento.

    // Movimento 1: cima, cima, cima, direita
    const char *movimento1_passos[] = {"cima", "cima", "cima", "direita"};
    int num_passos1 = sizeof(movimento1_passos) / sizeof(movimento1_passos[0]);
    int i; // Contador para o loop for

    printf("Simulando Movimento 1 (cima, cima, cima, direita):\n");

    // Uso obrigatório de loop 'do-while' e 'for' aninhados.
    // O loop 'do-while' aqui engloba a lógica de um movimento completo.
    // Ele executará uma vez para demonstrar o movimento.
    int executar_movimento1 = 1; // Condição para o do-while
    do {
        // O loop 'for' itera sobre cada etapa do movimento.
        for (i = 0; i < num_passos1; i++) {
            printf("%s\n", movimento1_passos[i]);
        }
        executar_movimento1 = 0; // Garante que o do-while execute apenas uma vez para este movimento
    } while (executar_movimento1);

    printf("\n"); // Linha em branco para separar os movimentos

    // Movimento 2: direita, cima, cima, cima
    const char *movimento2_passos[] = {"direita", "cima", "cima", "cima"};
    int num_passos2 = sizeof(movimento2_passos) / sizeof(movimento2_passos[0]);

    printf("Simulando Movimento 2 (direita, cima, cima, cima):\n");

    // Uso obrigatório de loop 'do-while' e 'for' aninhados para o segundo movimento.
    int executar_movimento2 = 1; // Condição para o do-while
    do {
        // O loop 'for' itera sobre cada etapa do movimento.
        for (i = 0; i < num_passos2; i++) {
            printf("%s\n", movimento2_passos[i]);
        }
        executar_movimento2 = 0; // Garante que o do-while execute apenas uma vez para este movimento
    } while (executar_movimento2);

    printf("\nPrograma de movimentacao finalizado.\n");

    return 0;
}
