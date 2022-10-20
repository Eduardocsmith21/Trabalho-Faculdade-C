#include <stdlib.h>
#include <stdio.h>

int main () {

    const float lata = 350, garrafa_pequena = 600, garrafa_grande = 2000;
    float soma_lata = 0, soma_garrafa_pequena = 0, soma_garrafa_grande = 0;
    float quanlata = 0, quangarrafag = 0, quangarrafap = 0;
    float soma_litros = 0;

    printf ("Informe a quantidade de LATAS: ");
    scanf("%f", &quanlata);
    printf("Informe a quantidade de GARRAFAS DE 600ML: ");
    scanf("%f", &quangarrafap);
    printf("Informe a quantidade de GARRAFAS DE 2L:");
    scanf("%f", &quangarrafag);

    soma_lata = quanlata * lata;
    soma_garrafa_pequena = quangarrafap * garrafa_pequena;
    soma_garrafa_grande = quangarrafag * garrafa_grande;
    soma_litros = soma_lata+soma_garrafa_pequena+soma_garrafa_grande;

    printf("Ao todo sera levado %0.2f litros...\n", soma_litros);

    system("PEUSE");

    return 0;
}