#include <stdlib.h>
#include <stdio.h>

int main () {

    int p, m, g, quanP, quanM, quanG, soma;

    printf("---Informe a quantidade de camisetas que deseja comprar---\n");
    printf("Tamanho P: ");
    scanf("%d", &p);
    printf("Tamanho M: ");
    scanf("%d", &m);
    printf("Tamanho G: ");
    scanf("%d", &g);

    quanP = p*10;
    quanM = m*12;
    quanG = g*15;
    soma = quanP+quanM+quanG;

    printf("O valor arecadado sera de R$ %d", soma);
    printf(" reais");


    return 0;
}