#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Guardando e dobrando!\n");
    int i, Valor_inicial= 1, Valor_final= 1;

    for(i=1; i < 30; i++){
        printf(" contagem %d\n", i);
        Valor_inicial= Valor_inicial * 2;
        Valor_final=  Valor_final + Valor_inicial;
        printf("%d\n", Valor_final);

    }
    printf("Valor em reias %.2f ",Valor_final/100.00);
    return 0;
}
