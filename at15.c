#include <stdlib.h>
#include <stdio.h>

int main () {

    float Conta = 0, Divisao_Conta;
    float DvCarlos = 0, DvAndre = 0, DvFelipe = 0;
    float c, d, u;

    printf("Valor da conta: ");
    scanf("%f", &Conta);

    c = Conta/100;
    d = (Conta-c*100)/10;
    u = (Conta-c*100)-(d*10);

    Divisao_Conta = Conta/3;

    DvCarlos = Divisao_Conta;
    DvAndre = Divisao_Conta;
    DvFelipe = Divisao_Conta + (0,25 / 100);

    printf("Calor pagara %0.2f\n", DvCarlos);
    printf("Andre pagara %0.2f\n", DvAndre);
    printf("Felipe pagara %0.2f", DvFelipe);
    return 0;
}