/*
Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação que se deseja efetuar com os números. Assim, se o símbolo for “+”, deverá ser realizada uma adição, se for “−”, uma subtração, se for “/”, uma divisão e se for “*”, será efetuada uma multiplicação. Retorne o resultado da operação para o programa principal.
*/

#include <stdio.h>

void Operation(float number1, float number2, char character){
	switch(character){
		case '+':
		printf("%.6f", number1 + number2);
		break;
		case '-':
		printf("%.6f", number1 - number2);
		break;
		case '*':
		printf("%.6f", number1*number2);
		break;
		case '/':
		printf("%.6f", number1/number2);
		break;
		default:
		printf("operacao invalida");
	}
}

void main(){
	float number1, number2;
	char character;
	scanf("%f%f %c", &number1, &number2, &character);
	Operation(number1, number2, character);
}
