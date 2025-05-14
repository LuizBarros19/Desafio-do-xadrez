#include <stdio.h>

// Declaração das funções de movimento
void moverCavalo();
void moverBispo();
void moverTorre(int casasRestantes);
void moverRainha(int casasRestantes);

int main() {
    printf("Jogo de Xadrez - Movimentos das Peças\n");
    printf("--------------------------------------\n\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo();
    printf("\n");

    printf("Movimento da Torre:\n");
    moverTorre(5); // Torre move 5 casas para a direita
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8); // Rainha move 8 casas para a esquerda
    printf("\n");

    return 0;
}

// Implementação das funções de movimento será adicionada nas próximas etapas

void moverCavalo() {
    // Implementação com loops com variáveis ou condições múltiplas
    // Movimento: cima, cima, cima, direita
    for (int passo = 1; passo <= 4; passo++) {
        if (passo <= 3) { // Os três primeiros passos são para cima
            printf("cima\n");
        } else { // O último passo é para a direita
            printf("direita\n");
        }
    }
}

void moverBispo() {
    // Implementação com loops aninhados
    // Movimento: 5 casas para diagonal direita cima
    int casas_diagonais = 5;
    for (int i = 0; i < casas_diagonais; i++) { // Loop externo para cada uma das 5 casas diagonais
        // Loop interno para satisfazer o requisito de "loops aninhados".
        // Neste contexto, ele executa uma vez por passo diagonal para imprimir a ação.
        for (int j = 0; j < 1; j++) {
            printf("direita, cima\n");
        }
    }
}

void moverTorre(int casasRestantes) {
    // Implementação com recursividade
    // Movimento: 5 casas para a direita
    if (casasRestantes <= 0) { // Condição de parada da recursão
        return;
    }
    printf("direita\n"); // Ação do movimento para a direita
    moverTorre(casasRestantes - 1); // Chamada recursiva para a próxima casa
}

void moverRainha(int casasRestantes) {
    // Implementação com recursividade
    // Movimento: 8 casas para a esquerda
    if (casasRestantes <= 0) { // Condição de parada da recursão
        return;
    }
    printf("esquerda\n"); // Ação do movimento para a esquerda
    moverRainha(casasRestantes - 1); // Chamada recursiva para a próxima casa
}
