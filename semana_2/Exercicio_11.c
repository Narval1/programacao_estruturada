/*
Faça um programa que mostre ao usuário um menu com quatro opções de operações 
matemáticas (1-Soma, 2-Subtração, 3-Divisão e 4-Multiplicação). 
O usuário escolhe uma das opções, e o seu algoritmo solicita DOIS valores numéricos e 
realiza a operação, mostrando o resultado. Entretanto, se o usuário digitar alguma opção 
diferente de 1-4, a seguinte mensagem deve ser apresentada: "Numero Invalido!". 
Além disso, os valores numéricos das operações de SOMA, SUBTRAÇÃO e MULTIPLICAÇÃO devem ser 
declarados como INTEIROS (int) e no caso da DIVISÃO, devem ser declarados como double.
*/
#include <stdio.h>
#include <math.h>

int main(){
	float n,m;
	int o;
	scanf("%d%f%f", &o,&m,&n);
	switch(o){
		case 1:
		printf("O resultado da soma eh:%.0f",  n + m);
		break;

		case 2:
		printf("O resultado da subtracao eh:%.0f", fabs(m - n));
		break;

		case 3:
		printf("O resultado da divisao eh:%.6f" ,m/n);
		break;

		case 4:
		printf("O resultado da multiplicacao eh:%.0f", n*m);
		break;
		
		default:
		printf("Numero Invalido!");
	}
}