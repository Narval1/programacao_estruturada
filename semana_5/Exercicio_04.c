/*
Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua diagonal principal e também na sua diagonal secundária.
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

void sum(int **array, int line, int row){
    int sumPrincipal = 0, sumSecundary = 0;
    int p = row - 1;
    for (int i = 0; i < line; i++){
        sumSecundary = sumSecundary + array[i][p];
        p--;
        for (int j = 0; j < row; j++){
            if (i == j) sumPrincipal = sumPrincipal + array[i][j];
        }
    }
    printf("Soma diagonal principal: %d\nSoma diagonal secundaria: %d\n", sumPrincipal, sumSecundary);
}

void main(){
    int row = 3, line = 3;
    int **array = createArray(line, row);
    sum(array, line, row);
}