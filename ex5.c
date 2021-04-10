#include <stdio.h>
#include <stdlib.h>

int *createPointer(int size) {
  int *pointerAux = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) scanf("%d", &pointerAux[i]);
  return pointerAux;
}

void main() {
  int size, *pointer = NULL;
  scanf("%d", &size);
  
  pointer = createPointer(size);

  for (int i = 0; i < size; i++) printf("%d ", pointer[i]);
  free(pointer);
  pointer = NULL;
  printf("\n");
}