/**
 * todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10%
 * para o garçom. Faça um algoritmo que lê o valor gasto com despesas realizadas em
 * um restaurante e imprima o valor total com a gorjeta
*/

#include<stdio.h>

int main()
{
    float prato, bebida, estacionamento, servico, conta;

    printf("SISTEMA DE CONTA PARA CLIENTES DO RESTAURANTE COMENDO BEM\n");
    
    printf("Digite o valor dos pratos comprados: R$ ");
        scanf("%f", &prato);
    printf("Digite o valor das bebidas compradas: R$ ");
        scanf("%f", &bebida);
    printf("Digite o valor do estacionamento: R$ ");
        scanf("%f", &estacionamento);
    
    servico = (prato + bebida + estacionamento) * 10 / 100;
    conta = prato + bebida + estacionamento + servico;

    printf("O valor da conta ficou: R$ %.2f", conta);

    return 0;
    
}