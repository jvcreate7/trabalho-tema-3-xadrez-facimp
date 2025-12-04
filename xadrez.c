#include <stdio.h>


 
 Este programa simula a movimentação de peças de xadrez utilizando:
 - Recursividade (Torre, Rainha, Bispo)
 - Loops Complexos e Aninhados (Cavalo)
*/

// --- Constantes de Movimento ---
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO 1 // O cavalo faz 1 movimento completo em L

// --- Funções Recursivas ---

// Função recursiva para a Torre (Move para a Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva
    }
}

// Função recursiva para a Rainha (Move para a Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}

// Função recursiva para o Bispo (Move na Diagonal: Cima, Direita)
// A implementação reflete o passo a passo da diagonal recursivamente.
void moverBispo(int casas) {
    if (casas > 0) {
        // Para simular "loops aninhados" na lógica de impressão vertical/horizontal
        // imprimimos as componentes do movimento.
        printf("Cima, Direita\n");
        moverBispo(casas - 1); // Chamada recursiva
    }
}

// --- Função Principal ---
int main() {
    printf("=== Simulador de Movimentos de Xadrez ===\n\n");

    // 1. Movimentação da Torre (Recursiva)
    printf("--- Movimento da Torre ---\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    // 2. Movimentação do Bispo (Recursiva)
    printf("--- Movimento do Bispo ---\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    // 3. Movimentação da Rainha (Recursiva)
    printf("--- Movimento da Rainha ---\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

    // 4. Movimentação do Cavalo (Loops Complexos)
    // Movimento: 2 casas para Cima e 1 para a Direita (Formato L)
    printf("--- Movimento do Cavalo ---\n");
    
    // Loop complexo com múltiplas variáveis de controle (i, j)
    // i controla o movimento vertical (Cima), j controla o horizontal (Direita)
    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++; // Incrementa o contador vertical
            // Uso de continue para forçar a próxima iteração e priorizar o movimento vertical
            // Isso garante que ele ande 2 para cima ANTES de virar para a direita
            continue; 
        }
        
        if (j < 1) {
            printf("Direita\n");
            j++; // Incrementa o contador horizontal
        }
    }
    
    printf("\n");

    return 0;
}
