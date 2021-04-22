/*
selectionSort
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap (int *number1, int *number2) {
  int aux = *number1;
  *number1 = *number2;
  *number2 = aux;
}

void selectionSort(int *array, int size) {
  int max;
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[j] > array[i]) swap(&array[i], &array[j]);
    }
  }
}

void main() {
  int size;
  int *array = NULL;
  scanf("%d", &size);
  array = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) scanf("%d", &array[i]);
  selectionSort(array, size);
  for (int i = 0; i < size; i++) printf("%d ", array[i]);

  free(array);
  printf("\n");
}