#include <stdio.h>
#include <stdlib.h>

char *createPointer(int size, char *str) {
  char *pointerAux = (char *)malloc(sizeof(char)*size);
  for(int i = 0; i < size; i++) pointerAux[i] = str[size - 1 - i];
  return pointerAux;
}

void main() {
  int size = 6;
  char str[size], *pointer = NULL;
  
  scanf("%s", str);

  pointer = createPointer(size, str);
  for (int i = 1; i < size; i++) printf("%c ", pointer[i]);

  free(pointer);
  pointer = NULL;
  printf("\n");
}