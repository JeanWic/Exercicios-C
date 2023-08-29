/*Faça um programa que receba o salário de um funcionario e o percentual
de aumento, calcule e mostre o valor do aumento e o novo salário*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento, salarion, percento;
    char nome[30];

    printf("Este programa fará o cálculo de aumento de um funcionário\n");
    printf("Digite o nome do Funcionário:\n");
    scanf("%s", nome);

    printf("Informe o salário do funcionário:\n");
    scanf("%f", &salario);

    printf("Insira o percentual de aumento:\n");
    scanf("%f", &percento);

    printf("Valor do Aumento: %.0f", percento);

    aumento= salario * percento/100;
    salarion= salario + aumento;

    printf("\nO funcionário %s recebeu um aumento de %.2f, portanto seu salário agora é %.2f\n", nome, aumento, salarion);
    
    system ("pause");

    return 0;
}