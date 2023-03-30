/* comentário de múltiplas linhas */
// comentário de única linha

/* printar mensagem no console: cuidado ao printar com acento, precisa de outra biblioteca e/ou acrescimento de código */
/*

regras da variável: se eu construir uma variável, não pode começar com número, não pode ter espaço, não pode caracteres especiais e precisa de palavra reservada

*/
#include<stdio.h>
int main()
{
    //declarar as variáveis
    int a;
    //entrada de dados
    printf("sistema de exemplo de uso de scan e print em linguagem C \n");
        printf("Digite um valor: ");
            scanf("%d", &a);
    //%d = dado do tipo int (inteiro)
    //&a = & (salvar dado na variável) a(variável onde será salvo)
    
    //saída dos dados
        printf("O valor digitado e: %d", a);

return 0;
}

