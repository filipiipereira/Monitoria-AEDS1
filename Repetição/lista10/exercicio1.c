#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool erro;
    do{
        printf("Digite a quantidade de mercadorias: ");
        scanf("%d", &n);
        erro = n < 0;
        if(erro) printf("Entrada invalida. Tente novamente!\n");
    }while(erro);
    float preco;
    float maiorPrecoAbaixoDois = 0;
    float maiorPrecoAcimaDois = 0;
    for(int i = 0; i < n; i++){
        do{
            printf("Digite o preco do %do produto: ", i+1);
            scanf("%f", &preco);
            erro = preco <= 0;
            if(erro) printf("Entrada invalida. Tente novamente!\n");
        }while(erro);
        if(preco < 2000 && preco > maiorPrecoAbaixoDois) maiorPrecoAbaixoDois = preco;
        else if(preco >= 2000 && preco > maiorPrecoAcimaDois) maiorPrecoAcimaDois = preco;
    }
    if(maiorPrecoAbaixoDois == 0 && maiorPrecoAcimaDois == 0) printf("Nao foram identificados salarios");
    else if(maiorPrecoAbaixoDois == 0) printf("Nao foram escritos precos menores que 2000\nMaior preco acima de 2000: %.2f", maiorPrecoAcimaDois);
    else if(maiorPrecoAcimaDois == 0) printf("Nao foram escritos precos maiores que 2000\nMaior preco abaixo de 2000: %.2f", maiorPrecoAbaixoDois);
    else printf("Maior preco abaixo de 2000: %.2f\nMaior preco abaixo de 2000: %.2f", maiorPrecoAbaixoDois, maiorPrecoAcimaDois);
    return 0;
}