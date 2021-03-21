/*
Crie uma função recursiva que retorne a SOMA dos elementos de um vetor de inteiros com 4 elementos.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int sum(int *array, int index){
  if (index == 0) return array[0];
  return sum(array,index - 1) + array[index];
}

void main(){
  int array[4], size = 3;
  for (int i = 0; i < 4; i++) scanf("%d", &array[i]);
  printf("%d\n", sum(array, size));
}