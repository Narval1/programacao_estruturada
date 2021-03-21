/*
Crie uma enumeração representando os dias da semana. 
Agora, escreva um programa que leia um valor inteiro do teclado e exiba o dia da semana 
correspondente.
*/
#include <stdio.h>
enum week {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
int main(){
    enum week day;
    int d;
    scanf("%d", &d);
    day = d;
    switch(day){
        case Domingo:
            printf("Domingo");
            break;
        case Segunda:
            printf("Segunda");
            break;
        case Terca:
            printf("Terca");
            break;
        case Quarta:
            printf("Quarta");
            break;
        case Quinta:
            printf("Quinta");
            break;
        case Sexta:
            printf("Sexta");
            break;
        case Sabado:
            printf("Sabado");
            break;
        default:
            printf("Dia invalido");
    }
}