#include <stdio.h>

int main(){
    int a = 10;
    int b = 100;
    int numerador;
    int denominador;
    int n;
    printf("Quantos termos? ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) {
            numerador = a + i;
            denominador = b - i;
        }
        else {
            denominador = a + i;
            numerador = b - i;
        }
        printf("%d/%d\t", numerador, denominador);
    }
    return 0;
}