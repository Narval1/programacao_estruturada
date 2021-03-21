/*
Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números INTEIROS. Em seguida, calcule um VETOR contendo TRÊS posições, em que cada posição deverá armazenar a SOMA dos números de cada COLUNA da matriz. Exiba na tela esse array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//cria um vetor de ponteiros
int **createArray(int line, int row){
  //alocaçao dinamica da  matriz
  int **array = malloc(sizeof(int *)*line);
  for (int i = 0; i < line; i++) array[i] = (int *)malloc(sizeof(int)*row);
  //leitura dos valores
  for (int i = 0; i < line; i++){
    for (int j = 0; j < row; j++){
      scanf("%d", &array[i][j]);
    }
  }
  return array;
}

void soma(int **array, int line, int row){
    for (int i = 0; i < line; i++){
        int sum = 0;
        for (int j = 0; j < row; j++){
            sum = sum + array[j][i];
        }
        printf("%d ", sum);
    }
}

void main(){
    int row = 3, line = 3;
    int **array = createArray(line, row);
    soma(array, line, row);
}