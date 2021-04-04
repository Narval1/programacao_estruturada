/*
Crie uma função que receba como parâmetro um VETOR de INTEIROS com TAMANHO CINCO e o imprima os elementos pares
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int size = 5;
    int *array = (int *)malloc(sizeof(int)*size);
    for (int i = 0; i < size; i++) scanf("%d", &array[i]);
    for (int i = 0; i < size; i++) {
        if (*(array + i)%2 == 0) printf("%d ", *(array + i));
    }
    printf("\n");
}