#include <stdio.h>

int main() {
    //nao rejeitei leituras invalidas
    int quantidadeFuncionarios;
    float salarioMinimo;
    float salario, maiorSalario, menorSalario;
    int quantidadeSalariosMinimos = 0;
    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &quantidadeFuncionarios);
    printf("Digite o salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o salario do 1o funcionario: ");
    scanf("%f", &salario);
    maiorSalario = menorSalario = salario;
    if(salario == salarioMinimo) quantidadeSalariosMinimos++;
    for(int i = 1; i < quantidadeFuncionarios; i++) {
        printf("Digite o salario do %do funcionario: ", i+1);
        scanf("%f", &salario);
        if(salario == salarioMinimo) quantidadeSalariosMinimos++;
        if(salario > maiorSalario) maiorSalario = salario;
        if(salario < menorSalario) menorSalario = salario;
    }
    float amplitude;
    float percentualSalarioMinimos;
    if(quantidadeFuncionarios == 0){
        amplitude = percentualSalarioMinimos = 0;
    }
    else{
        amplitude = maiorSalario - menorSalario;
        percentualSalarioMinimos = (float) 100 * quantidadeSalariosMinimos / quantidadeFuncionarios;
    }
    printf("%.2f porcento dos funcionarios recebem salario minimo\n", percentualSalarioMinimos);
    printf("Amplitude salarial = %.2f", amplitude);
    return 0;
}