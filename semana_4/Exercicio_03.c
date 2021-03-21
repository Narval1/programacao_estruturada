/*
Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos:

a) Atribua os seguintes valores a esse array: 1, 0, 5, −2, −5, 7.
b) Armazene em UMA variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha.
*/

#include <stdio.h>

int main(){
    int array[6];

    for (int i = 0; i < 6; i++) scanf("%d", &array[i]);
    int soma = array[0] + array[1] + array[5];
    array[4] = 100;
    printf("A soma eh: %d\n", soma);
    for (int i = 0; i < 6; i++) printf("%d\n", array[i]);
}