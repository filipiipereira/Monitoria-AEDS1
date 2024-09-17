#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, numero;
    int quantidadeImpares = 0;
    int quantidadePares = 0;
    bool erro;
    do{
        printf("Digite a quantidade de numeros: ");
        scanf("%d", &n);
        erro = n <= 0;
        if(erro) printf("Entrada invalida. Tente novamente!\n");
    }while(erro);
    for (int i = 0; i < n; i++) {
        do{
            printf("Digite um numero positivo: ");
            scanf("%d", &numero);
            erro = numero <= 0;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
        if(numero % 2 == 0) quantidadePares++;
        else quantidadeImpares++;
    }
    printf("Quantidade pares: %d\nQuantidade impares: %d", quantidadePares, quantidadeImpares);
    return 0;
}