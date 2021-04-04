#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int size,  aux = 0;
    scanf("%d", &size);
    int *array = (int *)malloc(sizeof(int)*size);

    for (int i = 0; i <  size; i++) {
        scanf("%d", array + i);
        if (*(array + i) > aux) aux = *(array + i);
    }
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (*(array + i) == aux) counter++;
    }
    printf("O numero %d occoreu %d vezes\n", aux, counter);
}