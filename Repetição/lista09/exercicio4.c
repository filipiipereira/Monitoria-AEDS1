#include <stdio.h>
#include <stdbool.h>
int main(){
    int n1, n2;
    bool primos;
    char continuar;
    bool erro;
    do{
        primos = true;
        do{
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            erro = n1 <= 0;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
        do{
            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
            erro = n2 <= 0;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
        int fim;
        if(n2 > n1) fim = n1;
        else fim = n2;
        int i = 2;
        while(primos && i <= fim){
            if(n1 % i == 0 && n2 % i == 0) primos = false;
            i++;
        }
        if(primos) printf("Primos entre si\n");
        else printf("Nao primos entre si\n");
        do{
            printf("Voce quer continuar(S ou N)? ");
            scanf(" %c", &continuar);
            erro = continuar != 's' && continuar != 'S' && continuar != 'N' && continuar != 'n';
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
    }while(continuar == 's' || continuar == 'S');
    return 0;
}