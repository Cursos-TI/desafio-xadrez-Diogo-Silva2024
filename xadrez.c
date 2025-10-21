#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// --- Funções Recursivas para Movimentação (Nível Mestre) ---

/**
 * @brief Simula o movimento da Torre (Direita) usando recursividade.
 * @param casas_restantes O número de casas que a Torre ainda precisa mover.
 * @param casas_iniciais O número total de casas para calcular o passo atual.
 */
void moverTorreRecursivo(int casas_restantes, int casas_iniciais) {
    if (casas_restantes <= 0) {
        return; // Condição de parada.
    }

    // A Torre move-se em linha reta para a Direita.
    printf("Casa %d: Direita\n", casas_iniciais - casas_restantes + 1);

    // Chamada recursiva
    moverTorreRecursivo(casas_restantes - 1, casas_iniciais);
}

/**
 * @brief Simula o movimento da Rainha (Esquerda) usando recursividade.
 * @param casas_restantes O número de casas que a Rainha ainda precisa mover.
 * @param casas_iniciais O número total de casas para calcular o passo atual.
 */
void moverRainhaRecursivo(int casas_restantes, int casas_iniciais) {
    if (casas_restantes <= 0) {
        return; // Condição de parada.
    }
    
    // A Rainha move-se para a Esquerda.
    printf("Casa %d: Esquerda\n", casas_iniciais - casas_restantes + 1);

    // Chamada recursiva
    moverRainhaRecursivo(casas_restantes - 1, casas_iniciais);
}

/**
 * @brief Simula o movimento do Bispo (Cima, Direita) usando recursividade e loops aninhados.
 *
 * @param casas_restantes O número total de movimentos diagonais restantes.
 * @param casas_iniciais O número total de casas para calcular o passo atual.
 */
void moverBispoRecursivoComLoopsAninhados(int casas_restantes, int casas_iniciais) {
    if (casas_restantes <= 0) {
        return; // Condição de parada.
    }

    // Sugestão: Bispo com Loops Aninhados
    // O loop mais externo (i) representa o passo vertical (Cima).
    for (int i = 1; i <= 1; i++) {
        // O loop mais interno (j) representa o passo horizontal (Direita).
        for (int j = 1; j <= 1; j++) {
            // Imprime o movimento diagonal como a combinação dos movimentos de um passo
            printf("Casa %d: Cima, Direita\n", casas_iniciais - casas_restantes + 1);
        }
    }
    
    // Chamada recursiva para o próximo passo diagonal
    moverBispoRecursivoComLoopsAninhados(casas_restantes - 1, casas_iniciais);
}

// ----------------------------------------------------------------------

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    int contador_movimentos; // Variável de controle para os loops (mantida para Cavalo)
    
    // Nível Mestre: Implementação de Movimentação do Bispo com Recursividade e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.

    printf("--- Simulação do Bispo (Recursivo + Loops Aninhados) ---\n");
    printf("Movimento: %d casas na diagonal (Cima, Direita)\n", CASAS_BISPO);
    
    // Chamada à função recursiva
    moverBispoRecursivoComLoopsAninhados(CASAS_BISPO, CASAS_BISPO);

    printf("Bispo parou após %d movimentos.\n", CASAS_BISPO);

    // Nível Mestre: Implementação de Movimentação da Torre com Recursividade
    printf("\n--- Simulação da Torre (Recursiva) ---\n");
    printf("Movimento: %d casas para a Direita\n", CASAS_TORRE);

    // Chamada à função recursiva
    moverTorreRecursivo(CASAS_TORRE, CASAS_TORRE);

    printf("Torre parou após %d movimentos.\n", CASAS_TORRE);

    // Nível Mestre: Implementação de Movimentação da Rainha com Recursividade
    printf("\n--- Simulação da Rainha (Recursiva) ---\n");
    printf("Movimento: %d casas para a Esquerda\n", CASAS_RAINHA);

    // Chamada à função recursiva
    moverRainhaRecursivo(CASAS_RAINHA, CASAS_RAINHA);

    printf("Rainha parou após %d movimentos.\n", CASAS_RAINHA);

    // ----------------------------------------------------------------------

    // Nível Mestre - Movimentação do Cavalo
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("\n\n--- Simulação do Cavalo (Loops Aninhados Complexos) ---\n");
    
    // Movimento em "L": 2 casas para Cima (Vertical) e 1 casa para a Direita (Horizontal)
    const int VERTICAL = 2; 
    const int HORIZONTAL = 1;
    int passo_total = 1; 

    // Loop Externo: Controla o movimento VERTICAL (Cima).
    // Usamos 'i=0' e 'j=0' no 'for' para ter múltiplas variáveis de controle.
    for (int i = 0, j = 0; i < VERTICAL; i++) {
        
        // Passo para Cima (Vertical)
        printf("Passo %d: Cima\n", passo_total);
        passo_total++;

        // Loop Interno: Controla o movimento HORIZONTAL (Direita).
        // Usamos uma condição avançada de que o movimento horizontal só acontece após o último passo vertical.
        for (int k = 0; k < 5; k++) { // k é a terceira variável de controle
            if (i < VERTICAL - 1) { 
                break; // Se não for o último passo vertical, não move horizontalmente.
            }

            if (j >= HORIZONTAL) {
                break; // Já moveu 1 casa para a Direita, para.
            }
            
            // Passo para Direita (Horizontal)
            printf("Passo %d: Direita\n", passo_total);
            passo_total++;
            j++; // Incrementa a variável de controle horizontal
            break; // Sai do loop interno para finalizar o "L"
        }
    }
    
    printf("Cavalo completou o movimento em 'L' (2 Cima, 1 Direita) em %d passos.\n", passo_total - 1);

    return 0;
}
