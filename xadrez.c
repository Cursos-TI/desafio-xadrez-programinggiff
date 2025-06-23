#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Constantes para quantidade de movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Função com Loop Aninhado - Bispo
void movimentarBispo() {
    printf("--------------------------\n");
    printf("### Movimentação do Bispo (5 Casas Diagonal Superior Direita) ###\n");
    printf("--------------------------\n");

    for (int i = 0; i < MOV_BISPO; i++) {
        for (int j = 0; j < 1; j++) {  // Loop interno para atender o requisito
            printf("Movimento %d: Cima\n", i + 1);
            printf("Movimento %d: Direita\n", i + 1);
        }
    }

    printf("\n--------------------------\n");
}

// Função recursiva - Torre
void movimentarTorre(int movimentos) {
    if (movimentos == MOV_TORRE) {
        printf("### Movimentação da Torre (5 casas para Direita) ###\n");
        printf("--------------------------\n");
    }

    if (movimentos == 0) {
        printf("\n--------------------------\n");
        return;
    }

    printf("Direita\n");
    movimentarTorre(movimentos - 1);
}

// Função recursiva - Rainha
void movimentarRainha(int movimentos) {
    if (movimentos == MOV_RAINHA) {
        printf("### Movimentação da Rainha (8 casas para Esquerda) ###\n");
        printf("--------------------------\n");
    }

    if (movimentos == 0) {
        printf("\n--------------------------\n");
        return;
    }

    printf("Esquerda\n");
    movimentarRainha(movimentos - 1);
}

// Função com Condições Múltiplas - Cavalo
void movimentarCavalo() {
    printf("### Movimentação do Cavalo (1 Movimento em L - Cima e Direita) ###\n");
    printf("--------------------------\n");

    int passosCima = 0;
    int passosDireita = 0;

    while (1) {
        // Movimento na direção Cima
        if (passosCima < 2) {
            printf("Cima\n");
            passosCima++;

            if (passosCima < 2) {
                continue; // Continua subindo até 2 passos
            }
        }

        // Movimento na direção Direita
        if (passosCima == 2 && passosDireita < 1) {
            printf("Direita\n");
            passosDireita++;
            break; // Movimento em L concluído
        }
    }

    printf("\n--------------------------\n");
    printf("### Fim de Jogo ###\n");
    printf("--------------------------\n");
}

// Função Principal
int main() {
    movimentarBispo();             // Loop aninhado
    movimentarTorre(MOV_TORRE);    // Recursão
    movimentarRainha(MOV_RAINHA);  // Recursão
    movimentarCavalo();            // Condições múltiplas

    return 0;
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    

