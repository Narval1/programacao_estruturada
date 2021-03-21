/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

#include <stdio.h>

int main(){
	int number, sum = 0;
	scanf("%d", &number);

	for (int i = 1; i < number; i++){
		if (number%i == 0) sum = sum + i;
	}
	printf("%d\n",sum);
}