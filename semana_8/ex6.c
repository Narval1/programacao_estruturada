#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func(int *array, int size) {
    int aux = 0;
     for (int i = 0; i < size; i++) {
        if (*(array + i) > aux) aux = *(array + i);
    }
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (*(array + i) == aux) counter++;
    }
    printf("O numero %d occoreu %d vezes\n", aux, counter);
}

void main() {
    int size;
    scanf("%d", &size);
    int *array = (int *)malloc(sizeof(int)*size);

    for (int i = 0; i <  size; i++) {
        scanf("%d", array + i);
    }
    func(array, size);
}