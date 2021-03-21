/*
SEM usar a função strlen(), faça um programa que LEIA uma string, com até 8 caracteres, imprima cada caractere e a sua quantidade.
*/

#include <stdio.h>
#include <string.h>

void main(){
  char str[8];
  int counter = 0;
  scanf("%s", str);
  for (int i = 0; str[i] != '\0'; i++){
      printf("%c\n", str[i]);
      counter++;
  }
  printf("%d\n", counter);
}
