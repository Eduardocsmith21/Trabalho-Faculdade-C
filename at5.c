#include <stdlib.h>
#include <stdio.h>

int main () {

    const float Gasolina = 5.50;
    float Vpagamento, Litros;

    printf ("Quantos deseja colocar de gasolina R$: ");
    scanf("%f", &Vpagamento);

    Litros = Vpagamento / Gasolina;

    printf("Valor do litro R$ 5.50\n");
    printf("Pagamento R$ %0.2f\n", Vpagamento);
    printf("Litros no tanque %0.2f\n",Litros);
    system("PAUSE");
    return 0;
}