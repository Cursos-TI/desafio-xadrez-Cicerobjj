//Desafio Xadrez Nível Aventureiro
//Inclui o movimento do cavalo duas casas para baixo e uma casa para a esquerda com dois loops aninhados

#include <stdio.h>

int main()
{
            int Torre = 0, Bispo = 0, Rainha = 0, Cavalo = 0;

        //TORRE
        for (Torre = 0; Torre < 5; Torre++) {
        printf("Direita\n");
    }
        
        //BISPO
        while (Bispo < 5) {
        printf("Cima Direita\n");
        Bispo++;
    }
    
        //RAINHA
        do {
        printf("Esquerda\n");
        Rainha++;
    }
        while (Rainha < 8);
        
         //CAVALO
         int casasparabaixo = 2;
	     int casasparaesquerda = 1; 
    	 int i, j;
	 for (i = 1; i <= casasparabaixo; i++) {
	 printf("Baixo\n");
	 if (i == casasparabaixo) {
	 j = 1;
	 do {
	 printf("Esquerda\n");
	 j++;
	 } 
	 while (j <= casasparaesquerda);
	 }
	}
         return 0;
}

