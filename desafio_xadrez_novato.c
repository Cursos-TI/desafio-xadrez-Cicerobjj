// Xadrez nível amador
#include <stdio.h>

int main()
{
            int Torre = 0, Bispo = 0, Rainha = 0;

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

    
    return 0;
}  
