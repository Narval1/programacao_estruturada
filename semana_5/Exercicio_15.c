/*
A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicação por somas sucessivas de DOIS inteiros.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int function(int param1, int param2){
  if (param2 == 0) return 0;
  return param1 + function(param1, param2 - 1);
}

void main(){
  int param1, param2;
  scanf("%d%d", &param1, &param2);
  printf("%d\n", function(param1, param2));
}