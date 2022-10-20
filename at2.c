#include <stdlib.h>
#include <stdio.h>

int main () {

    int Cav = 0,Fer;

    printf("Informe quantos cavalos tem no haras: ");
    scanf("%d", &Cav);

    Fer = Cav * 4;

    printf("Sera necessario %d", Fer);
    printf(" ferraduras");


    return 0;
}