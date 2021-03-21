/*
Crie uma função recursiva que receba um número inteiro N e retorne o SOMATÓRIOS dos números de 1 a N.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int sum(int number){
  if (number == 0) return 0;
  return number + sum(number - 1);
}

void main(){
  int number;
  scanf("%d", &number);
  if (number < 0) number = number*-1; 
  printf("%d\n", sum(number));
}
