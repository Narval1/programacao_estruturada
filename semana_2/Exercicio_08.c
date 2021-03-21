/*
a

Faça um programa que leia os valores de a e b (float), calcule e imprima o valor da hipotenusa
*/
#include <stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	scanf("%f%f",&a,&b);
	c = sqrt(powf(a,2) + powf(b,2));
	printf("A hipotenusa eh: %.6f",c);
}