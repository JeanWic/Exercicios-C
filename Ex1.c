#include <stdio.h>

int main(){

    int n1, n2, n3, n4, s;

    printf("Informe o primeiro números:\n");
    scanf("%d", &n1);
    printf("Informe o segundo números:\n");
    scanf("%d", &n2);
    printf("Informe o terceito números:\n");
    scanf("%d", &n3);
    printf("Informe o quarto números:\n");
    scanf("%d", &n4);
    
    printf("Números infomados:\nPrimeiro: %d\n", n1);
    printf("Segundo: %d\n", n2);
    printf("Terceiro: %d\n", n3);
    printf("Quarto: %d\n", n4);

    s= n1 + n2 + n3 + n4;
    printf("Resultado da soma: %d\n", s);

    system("pause");

}