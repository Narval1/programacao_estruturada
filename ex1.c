/*
Escreva um algoritmo que mostre o TAMANHO em byte que cada tipo de dados ocupa na memória: 
char, int, float, double.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
  printf("Char: %ld\nInt: %ld\nFloat: %ld\nDouble: %ld\n", sizeof(char),sizeof(int),sizeof(float),sizeof(double));
}