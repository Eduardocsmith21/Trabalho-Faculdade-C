#include <stdlib.h>
#include <stdio.h>

int main () {

    float lp1 = 0,lp2 = 0,lg3 = 0,lg4 = 0;
    float area;

    printf("Informe as MENORES dimensoes do terreno\n");
    printf("Dimensao 1: ");
    scanf("%f", &lp1);
    printf("Dimensao 2: ");
    scanf("%f", &lp2);

    printf("Informe as MAIORES dimensoes do terreno\n");
    printf("Dimensao 1: ");
    scanf("%f", &lg3);
    printf("Dimensao 2: ");
    scanf("%f", &lg4);
    
    area = (lp1 + lp2 / 2) * (lg3 + lg4 / 2);

    printf("A area do terreno e de : %f", area);

    return 0;
}