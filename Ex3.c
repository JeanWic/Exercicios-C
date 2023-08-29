/*Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos.
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos,
e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
    int s, m, h;

    printf("Insira o tempo em segundos:\n");
    scanf("%d", &s);

    h = s/3600;
    s = s-(3600*h);
    m = s/60;
    s = s-(60*m);


    printf("\nHoras: %d", h);
    printf("\nMinutos: %d", m);
    printf("\nSegundos: %d", s);
    
    
    return 0;
}