#include <stdio.h>
#include <stdbool.h>
int main(){
    int ano;
    char escolha;
    bool continuar;
    bool ehBissexto;
    bool multiplo_100;
    bool multiplo_400;
    bool multiplo_4;
    bool erro;
    do{
        printf("Digite o ano: ");
        scanf("%d", &ano);

        multiplo_100 = ano % 100 == 0;

        multiplo_400 = ano % 400 == 0;

        multiplo_4 = ano % 4 == 0;

        ehBissexto = (multiplo_100 && multiplo_400) || (multiplo_4 && !multiplo_100);
        
        if(ehBissexto) printf("Eh Bissexto\n");
        else printf("Nao eh Bissexto\n");

        do{
            printf("Voce quer continuar(S/N): ");
            scanf(" %c", &escolha);
            erro = escolha != 's' && escolha != 'n' && escolha != 'S' && escolha != 'N';
            if(erro) printf("Entrada invalida, tente novamente!\n");
        }while(erro);
        continuar = escolha == 's' || escolha == 'S';
    }while(continuar);
        return 0;
}
