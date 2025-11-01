#include <stdio.h>

//Estrutura void para torre, bispo e rainha
void moverTorre(int casas){ //Estou declarando em "void" o movimento da torre
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int passo, int limite) { //Estou declarando em void o movimento do bispo 
    if (passo >= limite) return; // condição de parada

    for (int i = 0; i < 1; i++) {        // loop vertical (externo)
        for (int j = 0; j < 1; j++) {    // loop horizontal (interno)
            printf("Cima, Direita\n");
        }
    }

    moverBispo(passo + 1, limite); // chamada recursiva
}

void moverRainha(int casas){ //Estou declarando em void o movimento da rainha
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){ //Estrutura para a impressão e comando do void acima

printf("=======================");
printf("MOVIMENTAÇÃO DE PEÇAS DE XADREZ");
printf("=======================\n");
printf("\n"); //pulei linha

printf("TORRE\n");
moverTorre(5); //Movimento de casas da torre
printf("\n");
printf("-------------------------------------\n");
printf("BISPO\n");
moverBispo(0, 5); //Movimento de casas da bispo
printf("\n");
printf("-------------------------------------\n");
printf("RAINHA\n");
moverRainha(8); //Movimento de casas da rainha
printf("\n");
printf("-------------------------------------\n");
printf("CAVALO\n");

int movimentoCompleto = 1; // controla quantas vezes o cavalo vai se mover

    while (movimentoCompleto--) {
        for (int i = 0; i < 3; i++) { // 3 etapas do movimento em L
            if (i < 2) { // duas casas pra cima
                printf("Cima\n");
                continue; // pula direto pro próximo passo
            }
            if (i == 2) { // uma casa pra direita
                printf("Direita\n");
                break; // encerra o loop após completar o L
            }
        }
    }

return 0;

}
