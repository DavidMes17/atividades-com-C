/**
 * calcular a média de quatro números inteiros dados
*/

#include<stdio.h>

int main()
{

    int num1, num2, num3, num4;
    float med;

    printf("Digite o primeiro numero inteiro: ");
        scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
        scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
        scanf("%d", &num3);
    printf("Digite o quarto numero: ");
        scanf("%d", &num4);

    med = (num1 + num2 + num3 + num4) / 4.0;
    printf("a media entre os 4 numeros eh: %.2f", med);
    
}