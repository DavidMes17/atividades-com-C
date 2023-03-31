/**
 * ler um número inteiro e mostrar seu sucessor e seu antecessor
*/

#include<stdio.h>

int main()
{

    int number, ant, suc;

    printf("Digite um número: ");
        scanf("%d", &number);
    ant = number - 1;
    suc = number + 1;
    printf("O antecessor do valor digitado é: %d", ant);
    printf("O sucessor do valor digitado é: %d", suc);

    return 0;
    
}