#include <stdio.h>
#define _FLAG 0

int main(){
    int numero;
    int quantidadePares = 0;
    int quantidadeParesIntervalo = 0;
    printf("Digite um numero(0 para encerrar): ");
    scanf("%d", &numero);
    while(numero != _FLAG) {
        if (numero % 2 == 0) quantidadePares++;
        if (numero % 2 == 0 && numero > 1000 && numero < 10000) quantidadeParesIntervalo++;
        printf("Digite um numero(0 para interromper): ");
        scanf("%d", &numero);
    }
    float percentual = (float) 100 * quantidadeParesIntervalo / quantidadePares;
    printf("%.2f porcento dos pares estao entre 1000 e 10000", percentual);
    return 0;
}