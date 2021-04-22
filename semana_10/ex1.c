/*
bubblesort 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int *array, int size) {
  bool ok = false;
  
  while (ok == false) {
    ok = true;
    for (int i = 0; i < size - 1; i++) {
      if (array[i] < array[i + 1]) {
        int temporary = array[i + 1];
        array[i + 1] = array[i];
        array[i] = temporary;
        ok = false;
      }
    }
  }
}

void main() {
  int size = 6;
  int *array = NULL;
  scanf("%d", &size);
  array = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) scanf("%d", &array[i]);
  bubbleSort(array, size);
  for (int i = 0; i < size; i++) printf("%d ", array[i]);

  free(array);
  printf("\n");
}