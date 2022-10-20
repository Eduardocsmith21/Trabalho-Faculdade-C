#include <stdlib.h>
#include <stdio.h>
int main () {

    float valor = 0, desc = 0;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);

    desc = valor - (valor * 10/100);

    printf("De %0.2f ficara %0.2f",valor, desc);
    return 0;
}