#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    float nota;
    float soma = 0;
    float menor_nota;
    float maior_nota;
    float media;
    bool erro;
    if(n == 0){
        media = maior_nota = menor_nota = 0;
    }
    else{
        do{
            printf("Digite a nota do 1o aluno: ");
            scanf("%f", &nota);
            erro = nota < 0 || nota > 100;
            if(erro) printf("Entrada invalida, tente novamente!\n");
        }while(erro);
        soma += nota;
        menor_nota = menor_nota = nota;
        if(nota >= 60){
                printf("Aprovado\n");
        }
        else{
            printf("Reprovado\n");
        }
        for(int i = 1; i < n; i++){
            do{
                printf("Digite a nota do %do aluno: ", i + 1);
                scanf("%f", &nota);
                erro = nota < 0 || nota > 100;
                if(erro) printf("Entrada invalida, tente novamente!\n");
            }while(erro);
            if(nota >= 60){
                printf("Aprovado\n");
            }
            else{
                printf("Reprovado\n");
            }
            soma += nota;
            if(nota < menor_nota) {
                menor_nota = nota;
            }
            if(nota > maior_nota){
                maior_nota = nota;
            }
        }
        media = soma/n;
    }
    printf("\nA media da tumrma eh %.2f, a maior nota eh %.2f e a menor eh %.2f\n", media, maior_nota, menor_nota);
        return 0;
}
