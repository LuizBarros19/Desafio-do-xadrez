#include <stdio.h>

// Função para simular a movimentação do Bispo
void moverBispo() {
    printf("Movimentação do Bispo:\n");
    int casas_movidas_bispo = 0; // A casa atual é considerada o valor zero
    int limite_casas_bispo = 5;

    while (casas_movidas_bispo < limite_casas_bispo) {
        printf("direita,cima\n");
        casas_movidas_bispo++;
    }
    printf("Bispo concluiu seu movimento.\n\n");
}

// Função para simular a movimentação da Torre
void moverTorre() {
    printf("Movimentação da Torre:\n");
    int casas_movidas_torre = 0; // A casa atual é considerada o valor zero
    int limite_casas_torre = 5;

    while (casas_movidas_torre < limite_casas_torre) {
        printf("direita\n");
        casas_movidas_torre++;
    }
    printf("Torre concluiu seu movimento.\n\n");
}

// Função para simular a movimentação da Rainha
void moverRainha() {
    printf("Movimentação da Rainha:\n");
    int casas_movidas_rainha = 0; // A casa atual é considerada o valor zero
    int limite_casas_rainha = 8;

    while (casas_movidas_rainha < limite_casas_rainha) {
        printf("direita\n");
        casas_movidas_rainha++;
    }
    printf("Rainha concluiu seu movimento.\n\n");
}

int main() {
    moverBispo();
    moverTorre();
    moverRainha(); // Adicionando a chamada da função da Rainha
    return 0;
}
