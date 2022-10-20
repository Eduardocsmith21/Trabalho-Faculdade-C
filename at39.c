#include <stdlib.h>
#include <stdio.h>

int main () {

    float c1 = 200, c2 = 120, juros_c1, juros_c2, soma_juros;
    float salario = 1200, salario_atual = 0;

    juros_c1 = (c1*2/100);
    juros_c2 = (c2*2/100);

    soma_juros = juros_c1 + juros_c2;
    salario_atual = salario - soma_juros;

    printf("Restara do salario de joao R$ %0.2f\n",salario_atual);

    system ("PAUSE");

    return 0;
}