#include <stdlib.h>
#include <stdio.h>

int main () {

    float b = 0, h = 0, v = 0;
    const float pi = 3.14;
    float area = 0;

    printf("Informe a dimencao da base: ");
    scanf("%f", &b);
    printf("Informe a altura: ");
    scanf("%f", &h);

    area = pi * (b*b);
    v = area*h;

    printf("Volume: %0.2f\n", v);
    system ("PAUSE");

    return 0;
}