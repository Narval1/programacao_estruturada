/*
Faça um programa que leia DOIS números e mostre o MAIOR deles. Se, por acaso, os dois números forem IGUAIS, imprima a mensagem “Numeros Iguais!!”.
*/
#include <stdio.h>
#include<math.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a > b) printf("O %d eh o maior numero!",a);
	else if(b > a) printf("O %d eh o maior numero!",b);
	else printf("Numeros Iguais!");
}