/*Faça um programa que receba dois números e mostre o maior deles.
Caso eles sejam iguais, deve-se mostrar a mensagem "Os Números são iguais".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("\nInsira o primeiro número:\n");
    scanf("%f", &n1);

    printf("Insira o segundo número:\n");
    scanf("%f", &n2);

    if( n1 > n2){
        printf("O número maior é:%.1f\n", n1);
    }
    if (n2 > n1){
        printf("O número maior é:%.1f\n", n2);
    }

    if(n1 == n2){
        printf("Os números são iguais\n");
    }
    

    system ("pause");

    return 0;

}