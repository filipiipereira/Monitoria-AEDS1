#include <stdio.h>
#define _FLAG 0

int main(){
    float valor;
    int desconto;
    float valorPromocional;
    printf("Digite o valor(0 para encerrar): ");
    scanf("%f", &valor);
    while(valor != _FLAG) {
        if(valor < 500) desconto = 70;
        else if(valor <= 3000) desconto = 60;
        else desconto = 50;
        valorPromocional = valor - valor * desconto / 100;
        printf("Valor promocional: %.2f\n", valorPromocional);
        printf("Digite o valor(0 para encerrar): ");
        scanf("%f", &valor);
    }
    return 0;
}