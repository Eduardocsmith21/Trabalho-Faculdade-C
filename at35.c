#include <stdlib.h>
#include <stdio.h>

int main () {

    int diagonal_maior, diagonal_menor, area;

    printf("Medida da diagonal maior: ");
    scanf("%d", &diagonal_maior);
    printf("Medida da diagonal menor: ");
    scanf("%d", &diagonal_menor);

    area = (diagonal_maior*diagonal_menor)/2;

    printf("Area: %d\n", area);
    system("PAUSE");
    return 0;
}