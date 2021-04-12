/*
Implemente uma FUNÇÃO que receba, como parâmetro, um inteiro N e crie uma  MATRIZ ALOCADA 
DINAMICAMENTE contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na DIAGONAL 
PRINCIPAL, o valor 1 nos elementos ACIMA DA DIAGONAL PRINCIPAL e o valor −1 nos elementos ABAIXO 
DA DIAGONAL PRINCIPAL. Por fim, a MATRIZ deve ser RETORNADA e IMPRESSA no main().
*/

#include <stdio.h>
#include <stdlib.h>

int **createPointer(int size) {
  int **pointerAux = (int **)malloc(sizeof(int *)*size);
  for (int i = 0; i < size; i++) pointerAux[i] =(int *)malloc(size*sizeof(int));
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i < j) pointerAux[i][j] = 1;
      if (i > j) pointerAux[i][j] = -1; 
      if (i == j) pointerAux[i][j] = 0;
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