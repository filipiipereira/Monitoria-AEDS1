#include <stdio.h>
#define _FLAG -1
int main(){
    int idade;
    //leitura antes do while
    printf("Digite a idade: ");
    scanf("%d", &idade);
    while(idade != _FLAG){
        //instruções especificas do seu algoritmo

        printf("idade diferente da flag\n");






        //ultima coisa do while: leitura novamente
        printf("Digite a idade: ");
        scanf("%d", &idade);
    }
}