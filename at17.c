#include <stdlib.h>
#include <stdio.h>

int main () {

    float c = 0, f = 0, k = 0;

    printf("Informe a temperatura em celsius: ");
    scanf("%f", &c);
    
    f = (c * 9 / 5) + 32;
    k = c + 273.15;

    printf("%0.2f Graus celsius = %0.2f Fahrenheit\n", c, f);
    printf("%0.2f Graus celsius = %0.2f Kelvin\n", c,k);

    system ("PAUSE");

    return 0;
}