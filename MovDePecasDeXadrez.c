#include <stdio.h>

int main(){

int b = 0;
int r = 0;
int movimentocompleto = 1;

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

printf("\n"); //pulei linha

printf("-------------------------------------\n");
//Mover o cavalo em "L"
printf("*** CAVALO *** \n"); //Estrutura em "while" aninhado em "for"
while (movimentocompleto --) //declarei "--" para zerar o movimento de loop 1 para 0. Se eu declarasse movimento = 2, teria dois loops
{ 
    for (int i = 0; i < 2; i++)
{
    printf("Cima\n");
}

    printf("Esquerda\n");
}


return 0;

}