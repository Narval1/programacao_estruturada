/*
Implemente um algoritmo que LEIA cinco valores e os armazene em um VETOR. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.

Ps: A média deve ser mostrada usando DUAS casas decimais.
*/

#include <stdio.h>

int main(){
    int array[6];
    float media = 0;

    for (int i = 0; i < 5; i++) scanf("%d", &array[i]);
    for (int i = 0; i < 5; i++){
        media = media + array[i];
        printf("%d ",  array[i]);
    }
    printf("\n%.2f\n", media/5);
}