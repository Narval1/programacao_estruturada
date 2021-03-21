/*
Faça um programa que leia uma matriz (inteiros) de tamanho 3 × 3 com números diferentes. Imprima na tela o menor valor, maior valor contido nessa matriz e a sua localização (linha e coluna).
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
//imprime o vetor criado
void printArray(int **array, int line, int row){
  for (int i = 0; i < line; i++){
    for (int j = 0; j < row; j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}

int *searchPositions(int number, int line, int row, int **array){
  int *aux = (int *)malloc(sizeof(int)*2);
  for (int i = 0; i < line; i++){
    for (int j = 0; j < row; j++){
      if (number == array[i][j]){
        aux[0] = i;
        aux[1] = j;
        return aux;
      }
    }
  }
}

void main(){
  int line = 3, row = 3;
  int **array = createArray(line, row);
  int max = -1000, min = 1000;

  for (int i = 0; i < line; i++){
    for (int  j = 0; j < row; j++){
      if (array[i][j] > max) max = array[i][j];
      if (array[i][j] < min) min = array[i][j];
    }
  }
  int *aux = searchPositions(max, row, line, array);
  printf("Maior: %d\nPosicao (maior): %d linha e %d coluna\n", max, aux[0],aux[1]);
  aux = searchPositions(min, row, line, array);
  printf("Menor: %d\nPosicao (menor): %d linha e %d coluna\n", min, aux[0],aux[1]);
}