#include <stdlib.h>
#include <stdio.h>

int main () {

    int cateto_oposto = 0, cateto_adjacente = 0, hipotenusa;

    printf("Informe o valor do cateto ADJACENTE: ");
    scanf("%d", &cateto_adjacente);
    printf("Informe o valor do cateto OPOSTO: ");
    scanf("%d", &cateto_oposto);

   hipotenusa = (cateto_adjacente * cateto_adjacente) + (cateto_oposto * cateto_oposto);

   printf("Hipotenusa: %d \n", hipotenusa);

   system ("PAUSE");

    return 0;
}