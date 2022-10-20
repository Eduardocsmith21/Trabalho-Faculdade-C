#include <stdlib.h>
#include <stdio.h>

int main () {

    float salario, cm, vendas, salario_atual;

    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Quantas venda foram feiras: ");
    scanf("%f", &vendas);

    cm = vendas * (salario*4/100); // so a comissão
    salario_atual = salario + cm;

    printf("Comissao %f\n", cm);
    printf("Salario com comissao: %f\n", salario_atual);

    system("PAUSE");
    return 0;
}