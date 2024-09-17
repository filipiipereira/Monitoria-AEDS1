#include <stdio.h>

int main(){
    int termo1 = 0;
    int termo2 = 1;
    int termo3 = 1;
    int n;
    printf("Quantos termos? ");
    scanf("%d", &n);
    if(n == 1) printf("0");
    else{
        printf("0, 1");
        for (int i = 3; i <= n; i++){
            termo3 = termo2 + termo1;
            printf(", %d", termo3);
            termo1 = termo2;
            termo2 = termo3;
        }
    }
    return 0;
}
