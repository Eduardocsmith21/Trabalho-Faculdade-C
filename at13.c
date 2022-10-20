#include <stdlib.h>
#include <stdio.h>

int main () {

    int numero = 0;
    int c, d, u;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999)
    {
        printf("Numero invalido");
    }
    else
    {
        c = numero/100;
        d = (numero - c * 100) /10;
        u = (numero - c * 100) - (d*10);

        printf("Centena = %d\n", c);
        printf("Dezena = %d\n", d);
        printf("Unidade = %d", u);
    }
    return 0;
}