/**
 * calcule 20% de um valor qualquer
*/
#include<stdio.h>

int main(){
    int valor;
    float gorjeta;

    printf("Entre com um valor: ");
    scanf("%d", &valor);

    gorjeta = valor * (20.0/100);

    printf("Valor de gorjeta R$ %.2f", gorjeta);

    return 0;
}