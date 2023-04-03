/**
 * efetue um algaritmo que leia valores de horas no formato hora, minuto e os converta para segundos
*/

#include<stdio.h>

int main()
{

    int hora, minuto, segundo;

    printf("Digite o horário no formato hh/mm/ss");
        scanf("%d%d%d", &hora, &minuto, &segundo);
    printf("O horario digitado eh: %d%d%d", hora, minuto, segundo);

    return 0;
    
}