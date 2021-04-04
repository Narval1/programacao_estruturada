#include <stdio.h>
#include <stdlib.h>

void func(float *array, int size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (*(array + i) < 0) counter++;
    }
    printf("%d\n", counter);
}

void main() {
    int matrix[3][3];
    int *pointer = &matrix[0][0];
    for (int i = 0; i < 9; i++) {
        scanf("%d", pointer + i);
        *(pointer + i) = *(pointer + i) + 1;
    }
    for (int i = 0; i < 9; i++) printf("%d ", *(pointer + i));
}