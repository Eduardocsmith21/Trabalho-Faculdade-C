#include <stdlib.h>
#include <stdio.h>

int main () {

    int nd1 = 0, nd2 = 0, div = 0;

    printf("Informe um numero: ");
    scanf("%d", &nd1);
    printf("Infome o segundo numero para dividir o primeiro: ");
    scanf("%d", &nd2);

    if (nd2 == 0)
    {
        printf("Numero invalido, o numero digitado tem que ser maior que 0...\n");
    }
    else
    {
        div = nd1/nd2;
        printf("A divisao de %d e %d corresponde a %d\n", nd1, nd2, div);
    }
    system("PAUSE");
    return 0;
}