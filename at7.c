#include <stdlib.h>
#include <stdio.h>

int main () {

    int Dia, Mes, Dias_Passados;

    printf("Informe um dia: ");
    scanf("%d", &Dia);
    printf("Infome um mes: ");
    scanf("%d", &Mes);

    Dias_Passados = ((Mes * 30)-30) + Dia;

    printf("Se passaram: %d", Dias_Passados);
    printf(" dias des do inicio do ano...");
    return 0;
}