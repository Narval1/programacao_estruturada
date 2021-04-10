/*
Escreva um programa que aloque dinamicamente uma MATRIZ de inteiros. As dimensões da matriz deverão 
ser lidas do USUÁRIO, via teclado. Em seguida, escreva uma função que receba um valor e RETORNE 1, 
caso o valor esteja na matriz, ou RETORNE 0, 
no caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int createMatrix(int line, int row, int number) {
  int **matrix = (int **)malloc(sizeof(int *)*line);

  for (int i = 0; i < line; i++) matrix[i] = (int *)malloc(sizeof(int)*row);
  for (int i = 0; i < line; i++) {
    for (int j = 0; j < row; j++) scanf("%d", &matrix[i][j]);
  }

  for (int i = 0; i < line; i++) {
    for (int j = 0; j < row; j++) {
      if (number == matrix[i][j]) return 1;
    }
  }
  return 0;
}

void main() {
  int line, row, number;
  scanf("%d%d%d", &line, &row, &number);
  printf("%d\n", createMatrix(line, row, number));
}