/*
Faça um programa que leia uma matriz de tamanho 4 × 4. Calcule e imprima a SOMA dos elementos dessa matriz que NÃO pertencem à DIAGONAL PRINCIPAL nem à DIAGONAL SECUNDÁRIA.
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
    int sum = 0, aux = row - 1;
    for (int i = 0; i < line; i++){
        for (int j = 0; j < row; j++){
            if (i != j) sum = sum + array[j][i];
        }
        sum = sum - array[i][aux];
        aux--;
    }
    printf("soma: %d\n", sum);
}

void main(){
    int row = 4, line = 4;
    int **array = createArray(line, row);
    soma(array, line, row);
}