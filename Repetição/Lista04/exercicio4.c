#include <stdio.h>
#include <stdbool.h>
int main(){
    float peso;
    float altura;
    char sexo;
    bool erro;
    do{
        printf("Digite a altura: ");
        scanf("%f", &altura);
        erro = altura <= 0 || altura >= 2.5;
        if(erro) printf("Leitura invalida, digite novamente!\n");
    }while(erro);
    do{
        printf("Digite o sexo: ");
        scanf(" %c", &sexo);
        erro = sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f';
        if(erro) printf("Leitura invalida, digite novamente!\n");
    }while(erro);
    if(sexo == 'm' || sexo == 'M') peso = 72.7 * altura - 58;
    else peso = 62.1 * altura -44.7;
    printf("O peso eh: %.2f", peso);
}