/*
Escreva uma função recursiva que calcule a SOMA dos primeiros n cubos:
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int sum(int number){
  if (number == 0) return 0;
  return pow(number,3) + sum(number - 1);
}

void main(){
  int number;
  scanf("%d", &number);
  if (number < 0) number = number*-1;
  printf("%d\n", sum(number));
}