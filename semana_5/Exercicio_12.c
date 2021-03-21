/*
Crie uma função recursiva que IMPRIMA todos os números naturais de 0 até N em ordem CRESCENTE.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void function(int number, int index){
  if (index == number){
    printf("%d\n", index);
    return;
  }
  printf("%d ", index);
  function(number, index + 1);
}

void main(){
  int number;
  scanf("%d", &number);
  function(number, 0);
}