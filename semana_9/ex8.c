/*
Escreva uma função que RECEBA um valor inteiro positivo N por PARÂMETRO e RETORNE o ponteiro para 
um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos preenchidos 
com CERTO VALOR, também PASSADO por parâmetro. Se CERTO VALOR  for NEGATIVO ou IGUAL A ZERO, um 
ponteiro NULO deverá ser RETORNADO e IMPRESSO no main(). Entretanto, se CERTO VALOR >0, o elemento 
passado como parâmetro deve ser INSERIDO no VETOR alocado dinamicamente que também deve ser IMPRESSO 
no main().  
*/

#include <stdio.h>
#include <stdlib.h>

int *createPointer(int size, int number) {
  int *pointer = NULL;
  if (number <= 0) return pointer;
  pointer = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) *(pointer + i) = number;
  return pointer;
}

void main() {
  int size, number,*pointer = NULL;
  scanf("%d%d", &size, &number);
  
  pointer = createPointer(size, number);
  if (pointer == NULL) {
    printf("NULL\n");
    return;
  }

  for (int i = 0; i < size; i++) printf("%d ", *(pointer + i));
  free(pointer);
  pointer = NULL;
  printf("\n");
}