/**
 * criar um algoritmo que leia um valor de hora e informe quantos minutos se passaram desde o início do dia
*/

#include<stdio.h>
/**
 * lógica utilizada:
 * Multipliquei o número de horas por 60 e somei o número de minutos para obter o total de minutos que se passaram desde o início do dia.
*/
int main()
{

    int hora, minuto, minTotal;

    printf("Digite a hora (em formato 24horas): ");
        scanf("%d", &hora);
    printf("Digite o minuto: ");
        scanf("%d", &minuto);
    
    //hora inicial: 00:00, então não tem o que somar com a hora
    minTotal = (hora * 60) + minuto;

    printf("Desde o começo do dia, se passaram: %d", minTotal);
    
}
