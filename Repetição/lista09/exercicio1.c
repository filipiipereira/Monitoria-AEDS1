#include <stdio.h>
#define _FLAG 0
int main(){
    int numero;
    int soma = 0;
    int quantidade = 0;
    printf("Digite um numero(0 para interromper): ");
    scanf("%d", &numero);
    while(numero != _FLAG) {
        soma += numero;
        quantidade++;
        printf("Digite um numero(0 para interromper): ");
        scanf("%d", &numero);
    }
    float media = (float) soma / quantidade;
    printf("A media eh %.2f", media);
    return 0;
}