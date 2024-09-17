int main(){

    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n == 0) printf("Todos os inteiros - {0}");
    else {
        printf("Os divisores sao: 1, -1");
        int limite_maximo = n/2;
        for(int i = 2; i <= limite_maximo; i++){
            if(n % i == 0) printf(", %d, %d", i, -i);
        }
        printf(", %d, %d", n, -n);
    }

        return 0;
}