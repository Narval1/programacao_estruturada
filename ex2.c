/*
Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. 
Em seguida, faça a alocação dinâmica desse vetor. 
Além disso, leia o vetor do usuário e o imprima. Por fim, o vetor criado deve ser desalocado.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
  int size;
  scanf("%d", &size);
  int *array = (int*)malloc(size*sizeof(int));
  for (int i = 0; i < size; i++) scanf("%d", &array[i]);
  for (int i = 0; i < size; i++) printf("%d ", array[i]);
  free(array);
  array = NULL;
  printf("\n");
}