/*
Insertion sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertionSort(int *array, int size) {
  int aux, j;
  for (int i = 0; i < size; i++) {
    aux = array[i];
    for (j = i; (j > 0) && (aux < array[j - 1]); j--) array[j] = array[j - 1];
    array[j] = aux;
    for (int k = 0; k <= i; k++) printf("%d ", array[k]);
    printf("\n");
  }
}

void main() {
  int size;
  int *array = NULL;
  scanf("%d", &size);
  array = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) scanf("%d", &array[i]);
  insertionSort(array, size);

  free(array);
}