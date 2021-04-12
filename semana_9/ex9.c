/*
Escreva uma função que RECEBA como parâmetro um valor N e RETORNE o PONTEIRO para uma matriz alocada 
dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1 na DIAGONAL PRINCIPAL 
e 0 nas DEMAIS POSIÇÕES. Por fim, a matriz deve ser impressa no main(). 
*/

#include <stdio.h>
#include <stdlib.h>

int **createPointer(int size) {
  int **pointerAux = (int **)malloc(sizeof(int *)*size);
  for (int i = 0; i < size; i++) pointerAux[i] =(int *)malloc(size*sizeof(int));
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == j) pointerAux[i][j] = 1;
      else pointerAux[i][j] = 0;
    }
  }
  return pointerAux;
}

void main() {
  int size, **pointer = NULL;
  scanf("%d", &size);
  
  pointer = createPointer(size);

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) printf("%d ", pointer[i][j]);
    printf("\n");
  }
  for (int i = 0; i < size; i++) free(pointer[i]);
  free(pointer);
  pointer = NULL;
  printf("\n");
}