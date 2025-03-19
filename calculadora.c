#include <stdio.h>
#include <stdlib.h>


void soma() {
    float valor1, valor2, result; 
    printf("\nDigite o um valor: ");
    scanf("%f", &valor1);
    printf("Digite o outro valor: ");
    scanf("%f", &valor2); 
    result = valor1 + valor2;
    printf("Resultado: %.2f\n", result);
}

void subtracao() {
    float valor1, valor2, result;
    printf("\nDigite o um valor: ");
    scanf("%f", &valor1);
    printf("Digite o outro valor: ");
    scanf("%f", &valor2);
    result = valor1 - valor2;
    printf("Resultado da subtração: %.2f\n", result);
}

void multiplicacao() {
    float valor1, valor2, result;
    printf("\nDigite o um valor: ");
    scanf("%f", &valor1);
    printf("Digite o outro valor: ");
    scanf("%f", &valor2);
    result = valor1 * valor2;
    printf("Resultado: %.2f\n", result);
}

void divisao() {
    float valor1, valor2, result;
    printf("\nDigite o um valor: ");
    scanf("%f", &valor1);
    printf("Digite o outro valor: ");
    scanf("%f", &valor2);
    
    if (valor2 == 0) {
        printf("Erro: divisão por zero não permitida!\n");
    } else {
        result = valor1 / valor2;
        printf("Resultado: %.2f\n", result);
    }
}

void exibir_menu() {
    printf("\nEscolha o tipo de operação:\n");
    printf("1. Soma\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
}

int main() {
    int opcao;

    while (1) { 
        exibir_menu(); 
        printf("\nDigite a opção: ");
        scanf("%d", &opcao); 

        switch (opcao) {
            case 1:
                soma(); 
                break;
            case 2:
                subtracao();
                break;
            case 3:
                multiplicacao();
                break;
            case 4:
                divisao();
                break;
            case 5:
                printf("Saindo...\n");
                exit(0); 
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0; //
}
