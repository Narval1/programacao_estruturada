/*
Escreva uma função recursiva que receba por parâmetro DOIS valores inteiros x e y e calcule e retorne o resultado de xy para o programa principal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int function(int param1, int param2){
  if (param2 == 0) return 1;
  return param1*function(param1, param2 - 1);
}

void main(){
  int param1, param2;
  scanf("%d%d", &param1, &param2);
  printf("%d\n", function(param1, param2));
}