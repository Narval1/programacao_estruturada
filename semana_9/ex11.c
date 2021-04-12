/*
Implemente uma função que RECEBA como PARÂMETRO DOIS vetores (A e B) e o tamanho N de A e B. 
A função deve RETORNAR o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que 
C[i] = A[i] + B[i].
*/

#include <stdio.h>
#include <stdlib.h>

int *createPointer(int size, int *pointer1, int *pointer2) {
  int *pointerAux = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) pointerAux[i] = pointer1[i] + pointer2[i];
  return pointerAux;
}

void main() {
  int size, *pointer = NULL;
  scanf("%d", &size);
  int *pointer1 = (int *)malloc(sizeof(int)*size), *pointer2 = (int *)malloc(sizeof(int)*size);

  for (int i = 0; i < size; i++) scanf("%d", &pointer1[i]);
  for (int i = 0; i < size; i++) scanf("%d", &pointer2[i]);


  pointer = createPointer(size, pointer1, pointer2);
  for (int i = 0; i < size; i++) printf("%d ", pointer[i]);
  free(pointer);
  pointer = NULL;
  printf("\n");
}