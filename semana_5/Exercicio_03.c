/*
Leia uma matriz de tamanho 4 × 4. Em seguida, CONTE e ESCREVA na tela a quantidade de valores MAIORES do que 10 e também a quantidade de números NEGATIVOS.
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
    for (int j = 0; j < row; j++) scanf("%d", &array[i][j]);
  }
  return array;
}

int *search(int line, int row, int **array){
  int *count = (int *)malloc(sizeof(int)*2);
  count[0] = 0;
  count[1] = 0;
  for (int i = 0; i < line; i++){
      for (int j = 0; j < row; j++){
          if (array[i][j] > 10) count[0]++;
          if (array[i][j] < 0) count[1]++;
      }
  }
  return count;
}

void main(){
    int row = 4, line = 4;
    int **array = createArray(line, row);
    int *aux = search(line, row, array);
    printf("Qtd. > 10: %d\nQtd. < 0: %d\n", aux[0], aux[1]);
}