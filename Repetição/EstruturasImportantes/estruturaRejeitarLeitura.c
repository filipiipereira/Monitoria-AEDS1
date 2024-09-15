#include <stdio.h>
#include <stdbool.h>
int main(){
    int n; //Não poderemos aceitar valores menores que 0
    bool erro; //variavel booleana erro
    do{
        //leitura
        printf("Digite o valor de n(n >=0): ");
        scanf("%d", &n);
        //atribuindo expressao booleana à variavel
        erro = n < 0;
        //utilizando a variavel booleana nas condicoes
        if(erro) printf("Entrada invalida, tente novamente!\n");
    }while(erro);
    printf("%d", n);
}