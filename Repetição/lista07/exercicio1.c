#include <stdio.h>

int main(){
    int precisao;
    printf("Quantos termos: ");
    scanf("%d", &precisao);
    float numero = 1;
    float soma = 1;
    if(precisao == 0) soma = 0;
    else{
        for(int i = 1; i < precisao; i++){
            numero /= 3.0;
            soma += numero;
        }
        printf("Soma = %.2f", soma);
    }
    return 0;
}
