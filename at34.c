#include <stdlib.h>
#include <stdio.h>

int main () {

    int lado = 0, area = 0;

    printf("Informe a base do quadrado: ");
    scanf("%d", &lado);

    area = (lado*lado);

    printf("Area = %d\n", area);

    system("PAUSE");

    return 0;
}