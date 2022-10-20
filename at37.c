#include <stdlib.h>
#include <stdio.h>

int main () {

    int n = 0, c = 0;

    printf("Digite um valor para saber a tabuada: ");
    scanf("%d", &n);

    for (c = 1; c < 11; c = c+1)
    {
        printf("%d X %d = %d \n", n,c, n*c);
    }
    system("PAUSE");
    return 0;
}