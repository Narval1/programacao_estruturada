/*
Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chamado triângulo de Floyd. Por exemplo, para N=6, o seguinte triângulo é formado:

1
2     3
4     5     6
7     8     9     10
11   12   13   14   15
16   17   18   19   20   21
*/

#include <stdio.h>

int main(){
	int number;
	int colunas = 1, contador = 1;
	scanf("%d", &number);

	for (int i = 0; i < number; i++){
		for (int j = 0; j < colunas; j++){
			printf("%d ", contador);
			contador++;
		}
		colunas++;
		printf("\n");
	}
}