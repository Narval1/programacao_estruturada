/*
Calcular e imprimir na tela uma matriz de tamanho LINHA × COLUNA, em que seus elementos são da forma:

a) A[i][j] = 2i + 7j – 2 se i < j;
b) A[i][j] = 3i2 – 1 se i = j;
c) A[i][j] = 4i3 + 5j2 + 1 se i > j.

Vale ressaltar que a LINHA e COLUNA deve ser definida pelo USUÁRIO.
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
        if (i < j) array[i][j] = 2*i + 7*j - 2;
        else if (i == j) array[i][j] = 3*pow(i, 2) - 1;
        else array[i][j] = 4*pow(i, 3) + 5*pow(j, 2) + 1;
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

void main(){
    int row, line;
    scanf("%d%d", &line, &row);
    int **array = createArray(line, row);
    printArray(array, line, row);
}