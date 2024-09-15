#include <stdio.h>
#include <stdbool.h>

int main() {

    float base;
    int expoente;
    bool erro; 

    printf("Digite a base(real): ");
    scanf("%f", &base);

    do{
        printf("\nDigite o expoente(inteiro, positivo ou nulo): ");
        scanf("%d", &expoente);
        erro = expoente < 0;
        if(erro) printf("Entrada invalida, tente novamente!\n");
    }while(erro);

    float resultado = 1;

    for(int i = 0; i < expoente ;i++){
        resultado *= base;
    }

    printf("O resultado eh %.2f", resultado);

        return 0;
}
