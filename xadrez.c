#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    int contador_movimentos; // Variável de controle para os loops
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("--- Simulação do Bispo (while) ---\n");
    printf("Movimento: %d casas na diagonal (Cima, Direita)\n", CASAS_BISPO);
    
    contador_movimentos = 1;

    // O loop 'while' executa enquanto o Bispo tiver casas para percorrer
    while (contador_movimentos <= CASAS_BISPO) {
        printf("Casa %d: Cima, Direita\n", contador_movimentos);
        contador_movimentos++;
    }
    printf("Bispo parou após %d movimentos.\n", CASAS_BISPO);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\n--- Simulação da Torre (for) ---\n");
    printf("Movimento: %d casas para a Direita\n", CASAS_TORRE);

    // O loop 'for' é o mais adequado quando o número de repetições é fixo
    for (contador_movimentos = 1; contador_movimentos <= CASAS_TORRE; contador_movimentos++) {
        printf("Casa %d: Direita\n", contador_movimentos);
    }
    printf("Torre parou após %d movimentos.\n", CASAS_TORRE);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n--- Simulação da Rainha (do-while) ---\n");
    printf("Movimento: %d casas para a Esquerda\n", CASAS_RAINHA);

    contador_movimentos = 1;
    
    // O 'do-while' garante que a Rainha se mova pelo menos uma vez, se CASAS_RAINHA for 0,
    // mas aqui verificamos o número para um movimento válido.
    if (CASAS_RAINHA > 0) { 
        do {
            printf("Casa %d: Esquerda\n", contador_movimentos);
            contador_movimentos++;
        } while (contador_movimentos <= CASAS_RAINHA);
    } else {
        printf("A Rainha não se moveu (CASAS_RAINHA é 0).\n");
    }
    printf("Rainha parou após %d movimentos.\n", CASAS_RAINHA);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n\n--- Simulação do Cavalo (Loops Aninhados: for e while) ---\n");
    
    const int MOVIMENTO_LONGO = 2; // 2 casas para Baixo (Vertical)
    const int MOVIMENTO_CURTO = 1; // 1 casa para a Esquerda (Perpendicular/Horizontal)
    int passo_total = 1; // Contador de passos para a exibição
    
    // Etapa 1: Movimento Longo (2 casas para Baixo)
    // Usamos um loop 'for' para esta parte.
    printf("Etapa 1: Movimento Longo (%d casas para Baixo)\n", MOVIMENTO_LONGO);
    for (int i = 0; i < MOVIMENTO_LONGO; i++) {
        // O Cavalo se move 2 casas para Baixo
        printf("Passo %d: Baixo\n", passo_total);
        passo_total++;
    }
    
    // Etapa 2: Movimento Curto (1 casa para a Esquerda)
    // Usamos um loop 'while' para a parte perpendicular, completando o movimento em "L".
    printf("Etapa 2: Movimento Curto (%d casa para a Esquerda)\n", MOVIMENTO_CURTO);

    int j = 0; 
    
    // Loop 'while' aninhado no escopo do main() (após o 'for' anterior)
    while (j < MOVIMENTO_CURTO) {
        // O Cavalo se move 1 casa para Esquerda
        printf("Passo %d: Esquerda\n", passo_total);
        passo_total++;
        j++;
    }

    printf("Cavalo completou o movimento em 'L' em %d passos.\n", passo_total - 1);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
