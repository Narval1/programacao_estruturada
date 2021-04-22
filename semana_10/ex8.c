/*
Insertion sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertionSort(int *array, int size) {
  int aux, j;
  for (int i = 1; i < size; i++) {
    aux = array[i];
    for (j = i; (j > 0) && (aux < array[j - 1]); j--) array[j] = array[j - 1];
    array[j] = aux;
  }
}

void main() {
  int size, number;
  int *array = NULL;
  scanf("%d%d", &number, &size);
  array = (int *)malloc(sizeof(int)*(size));
  for (int i = 0; i < size; i++) scanf("%d", &array[i]);
  insertionSort(array, size);
  array = realloc(array, (size + 1)*sizeof(int));
  array[size] = number;
  insertionSort(array, size + 1);
  for (int i = 0 ; i < size + 1; i++) printf("%d ", array[i]);
  free(array);
}