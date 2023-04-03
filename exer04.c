/**
 * ler nome, endereço e telefones e mostrá-los
*/

#include<stdio.h>

int main()
{

    char nome[100]; //char para receber strings, nome da variável e o limite de caracteres máximos
        printf("Digite seu nome: ");
            scanf("%s", nome); 
            //para escanear string, não é necessário do & antes da variável por que a variável já é um ponteiro para a primeira 
            //posição do array de caracteres, então não é necessário usar o operador & para obter o endereço de memória.
        printf("Seu nome eh: %s", nome);


    return 0;

}