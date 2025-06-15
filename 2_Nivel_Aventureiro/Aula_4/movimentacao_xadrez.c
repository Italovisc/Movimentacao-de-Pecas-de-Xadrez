#include <stdio.h>



int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;


    // Simulação do movimento da Torre usando for
    // Torre move-se 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }


    // Simulação do movimento do Bispo usando while
    // Bispo move-se 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }


    // Simulação do movimento da Rainha usando do-while
    // Rainha move-se 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);



    // Simulação do movimento do Cavalo usando loops aninhados
    // Cavalo move-se 2 casas para baixo e 1 casa para a esquerda (movimento em "L")
    // Utiliza um loop for (para as repetições do movimento em "L") e um loop while (para as casas em cada direção)
    printf("\nMovimento do Cavalo:\n");
    int movimentosCavalo = 1; // Quantas vezes o cavalo fará o movimento em "L"
    int casasBaixo = 2;
    int casasEsquerda = 1;

    for (int m = 0; m < movimentosCavalo; m++) {
        // Move 2 casas para baixo
        int k = 0;
        while (k < casasBaixo) {
            printf("Baixo\n");
            k++;
        }
        // Move 1 casa para a esquerda
        int l = 0;
        while (l < casasEsquerda) {
            printf("Esquerda\n");
            l++;
        }
    }


    
    return 0;
}