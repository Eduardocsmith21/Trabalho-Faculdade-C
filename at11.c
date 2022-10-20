#include <stdlib.h>
#include <stdio.h>

int main () {

    int Mes = 30;
    int Dias_Sem_Acidentes = 0;
    int Anos = 0;
    int Qmes = 0;
    int Qdia = 0;

    printf("Informe quantos dias esta sem acidentes: ");
    scanf("%d", &Dias_Sem_Acidentes);

    Anos = Dias_Sem_Acidentes/Mes/12;
    Qmes = Dias_Sem_Acidentes/Mes-Anos*12;
    Qdia = Dias_Sem_Acidentes%Mes;

    printf("%d anos %d meses e %d dias ", Anos, Qmes, Qdia);

    return 0;
}