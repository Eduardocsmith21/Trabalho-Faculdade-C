#include <stdlib.h>
#include <stdio.h>

int main () {


    float pao, broa, somaG, por, somaP, somaB;

    printf ("Informe a quantidade de Pao vendidos no dia: ");
    scanf("%f", &pao);
    printf ("Informe a quantidade de Broa vendidos no dia: ");
    scanf("%f", &broa);

    somaP = pao * 0.12;
    somaB = broa * 1.50;
    somaG = somaP + somaB;
    por = (somaG * 10 / 100);

    printf ("O lucro da venda dos paes e broas foram de R$:   %0.2f\n", somaG);
    printf("Devendo guardar na poupanca R$:  %0.2f", por);

    return 0;
}