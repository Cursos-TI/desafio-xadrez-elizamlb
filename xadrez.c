#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
     
    int i;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     printf("Movimento do Bispo: \n");
     i = 1;
     while (i <= 5) {
       printf("Cima, Direita\n", i);
       i++;
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre: \n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
   
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha \n");
    i = 1;
    do {
        printf("Esquerda\n", i);
        i++;
    } while (i <= 8);

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimento do Cavalo\n");
    int movimentoCavalo = 1;
    
    while (movimentoCavalo--)
    {
     for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
   }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

   // FUNÇÕES RECURSIVAS – TORRE, BISPO E  //

/* Torre – movimento vertical para cima */
void moverTorre(int casas) {
    if (casas == 0) {
        return; // caso base da recursão
    }

    printf("Cima\n");
    moverTorre(casas - 1); // chamada recursiva
}

/* Rainha – movimento horizontal para a direita */
void moverRainha(int casas) {
    if (casas == 0) {
        return; // caso base
    }

    printf("Direita\n");
    moverRainha(casas - 1);
}

/* Bispo – recursividade + loops aninhados
   Loop externo: vertical
   Loop interno: horizontal */
void moverBispo(int casas) {
    if (casas == 0) {
        return; // caso base da recursão
    }

    for (int vertical = 1; vertical <= 1; vertical++) {
        printf("Cima\n");

        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// MOVIMENTO DO CAVALO – LOOPS COMPLEXOS //

void moverCavalo() {
    int passosVerticais = 2;
    int passosHorizontais = 1;

    /* Loop para o movimento vertical */
    for (int i = 1; i <= passosVerticais; i++) {
        if (i > passosVerticais) {
            break;
        }
        printf("Cima\n");
    }

    /* Loop para o movimento horizontal */
    for (int j = 1; j <= passosHorizontais; j++) {
        if (j < 1) {
            continue;
        }
        printf("Direita\n");
    }
}
int main() {

    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

   FUNÇÕES RECURSIVAS – TORRE, BISPO E RAINHA
   ====================================================== */

/* Torre – movimento vertical para cima */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima\n");
    moverTorre(casas - 1);
}

/* Rainha – movimento horizontal para a direita */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverRainha(casas - 1);
}

/* Bispo – recursividade + loops aninhados
   Loop externo: vertical
   Loop interno: horizontal */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    for (int vertical = 1; vertical <= 1; vertical++) {
        printf("Cima\n");

        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/* ======================================================
   MOVIMENTO DO CAVALO – LOOPS COMPLEXOS
   ====================================================== */

void moverCavalo() {
    int passosVerticais = 2;
    int passosHorizontais = 1;

    for (int i = 1; i <= passosVerticais; i++) {
        printf("Cima\n");
    }

    for (int j = 1; j <= passosHorizontais; j++) {
        printf("Direita\n");
    }
}

/* ======================================================
   FUNÇÃO PRINCIPAL
   ====================================================== */

int main() {

    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();



    return 0;
}
