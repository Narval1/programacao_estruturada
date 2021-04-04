/*
Crie uma função que receba como parâmetro um VETOR de INTEIROS com TAMANHO CINCO e o imprima. NÃO utilize índices para percorrer o vetor, 
apenas ARITMÉTICA DE PONTEIROS.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int size = 5;
    int *array = (int *)malloc(sizeof(int)*size);
    for (int i = 0; i < size; i++) scanf("%d", &array[i]);
    for (int i = 0; i < size; i++) printf("%d ", *(array + i));
}