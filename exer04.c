/**
 * ler nome, endereço e telefones e mostrá-los
*/

#include<stdio.h>

int main()
{

    char nome, endereco, telefone;

    printf("Digite um nome: ");
        scanf("%s", &nome);
    printf("Digite um endereço: ");
        scanf("%s", &endereco);
    printf("Digite um telefone: ");
        scanf("%s", &telefone);

    printf("O nome digitado foi %s \nO endereço digitado foi: %s \nO telefone digitado foi: %s", nome, endereco, telefone);


    return 0;

}