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
    int size;
    scanf("%d", &size);
    float *array = malloc(sizeof(float)*size);
    for (int i = 0; i < size; i++) scanf("%f", array + i);
    func(array, size);
}