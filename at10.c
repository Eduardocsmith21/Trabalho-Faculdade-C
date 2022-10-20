#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {

    int x1, y1, x2, y2;
    float distancia;

    printf("Informe a cordenada do primeiro ponto: ");
    scanf("%d %d", &x1, &y1);
    printf("Informe a cordenada do segundo ponto: ");
    scanf("%d %d", &x2, &y2);

    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1, 2));

    printf("A distancia de: %0.2f", distancia);

    return 0;
}