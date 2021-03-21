/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ÍMPARES e PARES.
*/

#include <stdio.h>

void func(){
	int number;
	scanf("%d", &number);
	for(int i = 1; i <= number; i = i + 2) printf("%d ",i);
	printf("\n");
	for(int i = 0; i <= number; i = i + 2) printf("%d ", i);
}

int main(){
	func();
}