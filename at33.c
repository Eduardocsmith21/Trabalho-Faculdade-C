#include <stdlib.h>
#include <stdio.h>

int main () {

    int base_menor = 0, base_maior = 0, altura = 0, area = 0;

    printf("Informe o tamanho da base menor: ");
    scanf("%d", &base_menor);
    printf("Informe o tamanho da base menor: ");
    scanf("%d", &base_menor);
    printf("Informe a altura: ");
    scanf("%d", &altura);

    area = ((base_maior+base_menor)*altura)/2;

    printf("A area do trapezio e de %d \n", area);
    system ("PAUSE");
    return 0;
}