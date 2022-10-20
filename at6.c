#include <stdlib.h>
#include <stdio.h>

int main () {

    float kg_prato, Valor_prato, Valor_finail;
    const float Peso_prato = 0.93;

    printf("KG do proto montado: ");
    scanf("%f", &kg_prato);

    Valor_prato = Peso_prato + kg_prato * 12;
    Valor_finail = (Valor_prato - Peso_prato);

    printf("Valor do prato R$:  %0.2f", Valor_finail);

    return 0;
}