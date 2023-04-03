/**
 * ler um número inteiro e mostrar seu sucessor e seu antecessor
*/

#include<stdio.h>

int main()
{

    int number, ant, suc;

    printf("Digite um numero: ");
        scanf("%d", &number);
    ant = number - 1;
    suc = number + 1;
    printf("O antecessor do valor digitado eh: %d\n", ant);
    printf("O sucessor do valor digitado eh: %d\n", suc);
    //ao imprimir 2 valores e ocasionar erros na hora de imprimir o resultado, adicione uma quebra de linha por que pode estar havendo uma 
    //impressão sem separado entre eles, alterando o resultado final

    return 0;
    
}
