/*
Faça um programa que preencha um vetor com 5 números reais. Em seguida, calcule e mostre na tela a QUANTIDADE de números negativos e a SOMA dos números positivos desse vetor.
*/

#include <stdio.h>
#include <stdbool.h>

void main(){
    float array[5], sum = 0;
    int total;

    for (int i = 0; i < 5; i++){
        scanf("%f", &array[i]);
        if (array[i] < 0) total++;
        else sum = sum + array[i];
    }
    printf("%d\n%.6f", total, sum);
}