#include <stdlib.h>
#include <stdio.h>

int main () {

    int n1 = 0, n2 = 0, n3 = 0, multi = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf ("%d", &n3);

    multi = (n1*n2*n3);

    printf("A multiplicacao dos numeros resulta em %d\n", multi);

    system("PAUSE");
    return 0;
}