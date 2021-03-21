/*
Faça um programa que leia um número inteiro e imprima seu antecessor e seu sucessor.
*/
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	printf("Antecessor de %d eh: %d\nSucessor de %d eh: %d",n, n - 1,n,n + 1);
}