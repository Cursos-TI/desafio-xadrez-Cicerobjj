//Desafio Xadrez Nível Aventureiro
//Inclui o movimento do cavalo duas casas para baixo e uma casa para a esquerda com dois loops aninhados

#include <stdio.h>

int main()
{
            int Torre = 0, Bispo = 0, Rainha = 0, Cavalo = 0;

        //TORRE
        for (Torre = 0; Torre < 5; Torre++) {
        printf("Torre vai para direita\n");
    }
        
        //BISPO
        while (Bispo < 5) {
        printf("Bispo vai para direita e para frente\n");
        Bispo++;
    }
    
        //RAINHA
        do {
        printf("Rainha vai para frente\n");
        Rainha++;
    }
        while (Rainha < 8);
        
         //CAVALO
         int n = 0;
         for (int i = 0; i <= n; i++) {
             for (int j = 0; j <= i; j++) {
             printf("Cavalo vai para tras\n");
         }
         do {
             printf("Cavalo vai para tras\n");
         }
         while (i >= 1 && i <= 2);
         }
         printf("Cavalo vai para a esquerda\n");               
         
         return 0;
}
