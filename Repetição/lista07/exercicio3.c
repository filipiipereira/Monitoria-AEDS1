#include <stdio.h>
#include <stdbool.h>
#define _FLAG 0
int main(){
    int numero;
    bool primo;
    bool erro;
    do{
        printf("Digite o numero(0 encerra o programa): ");
        scanf("%d", &numero);
        erro = numero < 0;
        if(erro) printf("Entrada invalida. Tente novamente!\n");
    }while(erro);
    while(numero != _FLAG){
        primo = true;
        if(numero == 1) primo = false;
        else if(numero != 2 && numero % 2 == 0) primo = false;
        else{
            //so preciso verificar, pra saber se um numero é primo, se ele é divisivel para os numeros menores que a metade dele
            int limite_maximo = numero / 2;
            for(int i = 3; i <= limite_maximo; i += 2){
                if(numero % i == 0) primo = false;
            }
        }
        if(primo) printf("Eh primo\n");
        else printf("Nao eh primo\n");
        do{
            printf("Digite o numero(0 encerra o programa): ");
            scanf("%d", &numero);
            erro = numero < 0;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
    }
    return 0;
}