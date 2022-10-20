#include <stdlib.h>
#include <stdio.h>

int main () {

    float salario, aumento, desconto, salario_final, tot;

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    
    aumento = (salario * 15 / 100);
    desconto = (aumento * 8 / 100);
    salario_final = salario + aumento;
    tot = salario_final - desconto;
    printf("Salario final: %0.2f", tot);
    return 0;
}

