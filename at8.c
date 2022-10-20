#include <stdlib.h>
#include <stdio.h>

int main () {

    float Nota1, Nota2, Nota3, Med;

    printf("Digite a primeira nota: ");
    scanf("%f", &Nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &Nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &Nota3);

    Med = (Nota1 + Nota2 + Nota3) / 3;

    printf("Media: %0.2f", Med);

    return 0;
}