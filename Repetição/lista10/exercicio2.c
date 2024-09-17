#include <stdio.h>
#include <stdbool.h>
int main(){
    float salario;
    float percentualReajuste;
    float novoSalario;
    char continuar;
    int quantidadeSalarios = 0;
    float somaSalarios = 0;
    bool erro;
    do{
        printf("Digite o %do salario: ", quantidadeSalarios + 1);
        scanf("%f", &salario);
        quantidadeSalarios++;
        somaSalarios += salario;
        if(salario < 1000) percentualReajuste = 10;
        else if(salario <= 2000) percentualReajuste = 8;
        else percentualReajuste = 7;
        novoSalario = salario + salario * percentualReajuste / 100;
        printf("Reajuste: %.2f%%\nNovo salario: %.2f\n", percentualReajuste, novoSalario);
        printf("Voce quer continuar(S ou N)? ");
        scanf(" %c", &continuar);
    }while(continuar == 's' || continuar == 'S');
    float media = somaSalarios / quantidadeSalarios;
    printf("Media dos Salarios: %.2f", media);
    return 0;
}