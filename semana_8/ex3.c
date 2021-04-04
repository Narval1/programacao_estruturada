/*
Crie um programa que contenha um array de inteiros com CINCO elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e IMPRIMA o DOBRO de cada valor lido.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int size = 5;
    int *array = (int *)malloc(sizeof(int)*size);

    for (int i = 0; i < size; i++) scanf("%d", &array[i]);
    for (int i = 0; i < size; i++) printf("%d ", *(array + i)*2);
}