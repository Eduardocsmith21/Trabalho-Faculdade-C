#include <stdlib.h>
#include <stdio.h>

int main () {

    const float pi = 3.14;
    float r = 0, area = 0;

    printf("Informe a dimencao: ");
    scanf("%f", &r);

    area = pi + (r*r);

    printf("A area da pizza e de : %0.2f", area);

    return 0;
}