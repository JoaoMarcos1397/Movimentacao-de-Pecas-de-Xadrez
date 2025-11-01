#include <stdio.h>

int main(){

int b = 0;
int r = 0;

printf("=======================");
printf("MOVIMENTAÇÃO DE PEÇAS DE XADREZ");
printf("=======================\n");
printf("\n"); //pulei linha

//Mover a torre 5 casas para a direita
printf("*** TORRE *** \n"); //Estrutura em "for"
for (int t = 0; t < 5; t++) //Não precisei declarar a variável no conjunto acima, pois a estrutura "for" pode declarar junto
{
    printf("Direita\n"); //Imprima a direção do movimento
}

printf("\n"); //pulei linha

printf("-------------------------------------\n");
//Mover a bispo 5 casas para a diagonal/direita
printf("*** BISPO *** \n"); //Estrutura em "do-while"
do
{
    
    printf("Cima, Direita\n");
    b++;
} while (b < 5);

printf("\n"); //pulei linha

printf("-------------------------------------\n");
//Mover a rainha 8 casas para a esquerda
printf("*** RAINHA *** \n"); //Estrutura em "while"
while (r < 8)
{
    printf("Esquerda\n");
    r++;
}



return 0;

}