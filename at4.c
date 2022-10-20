#include <stdlib.h>
#include <stdio.h>

int main () {

    char Nome[20];
    int Idade, Dias;

    printf("Digite seu nome: ");
    scanf("%s", &Nome);
    
    printf("Informe sua idade: ");
    scanf("%d", &Idade);

    Dias = (Idade*365);

    printf(Nome);
    printf(" Tem ");
    printf("%d",Dias);
    printf(" dias de vida...");
    return 0;
}