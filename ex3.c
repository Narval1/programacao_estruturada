/*
Faça um programa que leia um valor inteiro N NÃO NEGATIVO. Se o valor de N for inválido, a mensagem 
("Numero deve ser POSITIVO! Digite um numero VALIDO!") deve ser impressa e o usuário deve digitar outro 
valor até que ele seja válido (ou seja, POSITIVO). Em seguida, leia, do teclado, um vetor V contendo 
N posições de inteiros, em que cada valor deverá ser MAIOR OU IGUAL A 2. Caso o número digitado 
NÃO seguir a condição (>=2), a mensagem ("Digite um numero >=2!") deve ser impressa para o usuário 
digitar um outro valor até que ele seja válido. Por fim, os elementos do vetor devem ser impressos. 
Esse vetor deverá ser alocado dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

void func() {
  int size;
  scanf("%d", &size);
  if (size < 0) {
    printf("Numero deve ser POSITIVO! Digite um numero VALIDO!\n");
    func();
  }

  int *pointer = (int *)malloc(sizeof(int)*size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &pointer[i]);
    if (pointer[i] < 2) {
      printf("Digite um numero >= 2!\n");
      i--;
    }
  }
  for (int i = 0; i < size; i++) printf("%d ", pointer[i]);
  free(pointer);
  pointer = NULL;
}

void main() {
  func();
  printf("\n");
}