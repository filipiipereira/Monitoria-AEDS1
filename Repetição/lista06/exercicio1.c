#include <stdio.h>
#include <stdbool.h>
int main(){
    int idade;
    char sexo;
    int idadeMaisVelho;
    int idadeMaisNovo;
    int quantidadeMaiores = 0;
    int quantidadeHomens = 0;
    int quantidadeMulheres = 0;
    float percentualHomens;
    float percentualMulheres;
    int numeroAlunos;
    bool erro;
    printf("DIgite quantos alunos: ");
    scanf("%d", &numeroAlunos);
    if(numeroAlunos == 0){
        idadeMaisVelho = idadeMaisNovo = percentualHomens = percentualMulheres = 0;
    }
    else{
        do{
            printf("Qual a idade do 1o aluno: ");
            scanf("%d", &idade);
            erro = idade < 0 || idade > 100;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
        do{
            printf("Qual o sexo ('m' ou 'f') do 1o aluno: ");
            scanf(" %c", &sexo);
            erro = sexo != 'm' && sexo != 'f';
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
        idadeMaisNovo = idadeMaisVelho = idade;
        if(idade >= 18) quantidadeMaiores++;
        if(sexo == 'm') quantidadeHomens++;
        else quantidadeMulheres++;
        for(int i = 1; i < numeroAlunos; i++){
            do{
                printf("Qual a idade do %do aluno: ", i + 1);
                scanf("%d", &idade);
                erro = idade < 0 || idade > 100;
                if(erro) printf("Entrada invalida. Tente novamente!\n");
            }while(erro);
            do{
                printf("Qual o sexo ('m' ou 'f') do 1o aluno: ");
                scanf(" %c", &sexo);
                erro = sexo != 'm' && sexo != 'f';
                if(erro) printf("Entrada invalida. Tente novamente!\n");
            }while(erro);
            if(idade >= 18) quantidadeMaiores++;
            if(idade < idadeMaisNovo) idadeMaisNovo = idade;
            if(idade > idadeMaisVelho) idadeMaisVelho = idade;
            if(sexo == 'm') quantidadeHomens++;
            else quantidadeMulheres++;
        }
        percentualHomens = (float) quantidadeHomens / numeroAlunos;
        percentualMulheres = (float) quantidadeMulheres / numeroAlunos;
    }
    printf("O percentual de homens eh %.2f%%. O de mulheres eh %.2f%%. O aluno mais velho tem %d anos e o mais novo tem %d anos. %d aluno(s) eh(sao) maiores de idade.", percentualHomens ,percentualMulheres, idadeMaisVelho, idadeMaisNovo, quantidadeMaiores);
    return 0;
}
