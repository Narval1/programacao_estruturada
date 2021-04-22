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
  int size;
  int *array = NULL;
  scanf("%d", &size);
  array = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) scanf("%d", &array[i]);
  insertionSort(array, size);
  for (int i = size -1; i >= 0; i--) printf("%d ", array[i]);

  free(array);
  printf("\n");
}