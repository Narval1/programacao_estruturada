/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem CRESCENTE e DECRESCENTE.
*/

#include <stdio.h>

void func(){
	int number;
	scanf("%d", &number);
	for(int i = 0; i <= number; i++) printf("%d ",i);
	printf("\n");
	for(int i = number; i >= 0; i--) printf("%d ", i);
}

int main(){
	func();
}