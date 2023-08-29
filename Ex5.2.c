/*Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o usuário escolher entre: 1 - Soma;
2- Subtrair; 3- Multiplicar; 4- Dividir. O usuário só consiguirá processar dois números por vez.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "Portuguese");

int op;
float n1, n2, res;

printf("Digite 1 para Somar;\nDigite 2 para Subtrair;\nDigite 3 para Multiplicar;\nDigite 4 para Dividir;\n");
scanf("%d", &op );

printf("Insira o primeiro número:\n");
scanf("%f", &n1);

printf("Insira o segundo número:\n");
scanf("%f", &n2);

switch (op){
    case 1:
        res= n1 + n2;
        printf("Soma: %f.\n", res);
        break;
    case 2:
        res = n1 - n2;
        printf("Subtração:%f.\n", res);
        break;
    case 3:
        res = n1 * n2;
        printf("Multiplicação:%f.\n", res);
        break;
    case 4:
         if(n2 != 0){
            res = n1 / n2;
            printf("Divisão: %f.\n", res);
        }else {
            printf("Divisão por zero. \n");
        } 
        break;
    
}
system ("pause");

return 0;

}

