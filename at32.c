#include <stdlib.h>
#include <stdio.h>

int main () {

    float kg = 0, g = 0;

    printf("Informe seu peso em KG: ");
    scanf("%f", &kg);

    g = (kg*1000);

    printf("%0.2f kg equivale a %0.2f gramas\n",kg,g );

    system("PAUSE");

    return 0;
}