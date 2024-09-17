#include <stdio.h>
#include <stdbool.h>
#define _FLAG 0
int main(){
    float nota;
    int quantidadeAprovados = 0;
    int quantidadeReprovados = 0;
    int quantidadeAlunos = 0;
    float percentualReprovado;
    float percentualAprovado;
    bool erro;
    do{
        printf("Qual a nota do 1o aluno: ");
        scanf("%f", &nota);
        erro = nota < 0 || nota > 100;
        if(erro) printf("Entrada invalida. Tente novamente!\n");
    }while(erro);
    while(nota != _FLAG){
        quantidadeAlunos++;
        if(nota >= 60) quantidadeAprovados++;
        else quantidadeReprovados++;
        do{
            printf("Qual a nota do %do aluno: ", quantidadeAlunos + 1);
            scanf("%f", &nota);
            erro = nota < 0 || nota > 100;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
    }
    if(quantidadeAlunos == 0) percentualReprovado = percentualAprovado = 0;
    else{
        percentualAprovado = (float) 100 * quantidadeAprovados / quantidadeAlunos;
        percentualReprovado = (float) 100 * quantidadeReprovados / quantidadeAlunos;
    }
    printf("Aprovados: %.2f%%\nReprovados: %.2f%%", percentualAprovado, percentualReprovado);
}