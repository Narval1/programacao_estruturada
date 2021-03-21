/*
Faça um programa que receba do usuário DOIS arrays, A e B, com 5 números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.
*/

#include <stdio.h>
#include <stdbool.h>

void main(){
    int array1[5], array2[5];

    for (int i =0; i < 5; i++) scanf("%d", &array1[i]);
    for (int i =0; i < 5; i++) scanf("%d", &array2[i]);

    for (int i = 0 ; i < 5; i++) printf("%d ", array1[i] - array2[i]);
    printf("\n");
}