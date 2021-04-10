/*
Escreva uma função que receba um valor inteiro positivo N por parâmetro e RETORNE o ponteiro para 
um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, um PONTEIRO NULO
 deverá ser retornado e a frase "Ponteiro NULL. deve ser impressa". Caso contrario, deve-se imprimir 
 "Ponteiro NAO NULL.".
*/
#include <stdio.h>
#include <stdlib.h>

int *createPointer(int size) {
  if (size <= 0) {
    printf("Ponteiro NULL");
    return 0;
  }
  int *pointerAux = (int *)malloc(sizeof(int)*size);
  printf("Ponteiro nao NULL");
  return pointerAux;
}

void main() {
  int size, *pointer = NULL;
  scanf("%d", &size);
  
  pointer = createPointer(size);

  free(pointer);
  pointer = NULL;
  printf("\n");
}