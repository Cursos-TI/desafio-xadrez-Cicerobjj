//Desafio Xadrez Nível Mestre

#include <stdio.h>

//Movimento da Torre
void recursiveLoopTorre(int T) {
    if (T <= 5) {
        printf("direita\n");
        recursiveLoopTorre(T + 1);
    }
}

//Movimento do Bispo
void recursiveLoopBispo(int n) {
int casasparadireita = 5;
int casasparacima = 5; 
int i, j;
    for (i = n; i <= casasparadireita; i++) {
        if (i == casasparadireita) {
        j = 1;
            do {
            printf("Cima Direita\n");
            j++;
        } 
        while (j <= casasparacima);
            recursiveLoopBispo(n + 1);
        }
    }
}

//Movimento da Rainha
void recursiveLoopRainha(int R) {
    if (R < 8) {
        printf("Esquerda\n");
        recursiveLoopRainha(R + 1);
    }
}

//Movimento do Cavalo
void recursiveLoopCavalo(int n) {
    int casasparadireita = 1;
    int casasparacima = 2;
    int i, j;

    
    for (i = 1; i <= casasparacima; i++) {
        printf("Cima\n");
    }

    
    for (j = 1; j <= casasparadireita; j++) {
        printf("Direita\n");
    }

    
    if (n < 1) { 
        recursiveLoopCavalo(n + 1);
    }
}


int main()

{
    int Torre = 1, Bispo = 5, Rainha = 1, Cavalo = 1;
        
        printf("Torre\n");
    recursiveLoopTorre(Torre);
        printf("Bispo\n");
        
    recursiveLoopBispo(Bispo);
        printf("Rainha\n");
        
    recursiveLoopRainha(Rainha);
        printf("Cavalo\n");
        
    recursiveLoopCavalo(Cavalo);
    
    return 0;
    
}