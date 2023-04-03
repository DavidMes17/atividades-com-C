/**
 * efetuar a soma de dois números e apresentar o resultado
*/

#include<stdio.h>

int main()
{

    float num1, num2, resul;

        printf("Calculadora de somar 2 números\n");
    printf("Digite o primeiro número: ");
        scanf("%f", &num1);
    printf("Digite o segundo número: ");
        scanf("%f", &num2);
    resul = num1 + num2;

    printf("O resultado eh: %.2f", resul);

    return 0;

}