/*
Implemente um algoritmo que LEIA do TECLADO um vetor de 10 posições e escreva na tela os números PARES e ÍMPARES. É importante destacar que o seu algoritmo NÃO deve imprimir, caso tiver, números PARES e ÍMPARES repetidos. Além disso, o MAIOR e MENOR número também deve ser impresso.
*/

#include <stdio.h>

int array[10];

void func(){
	int max = 0, min = 10000;
	for (int i = 0; i < 10; i++){
		scanf("%d", &array[i]);
		if (array[i] > max) max = array[i];
		if (array[i] < min) min = array[i];
	}
	//atribui -1 a numeros repetidos no vetor
	for (int i = 0; i < 10; i++){
		for (int j = i + 1; j < 10; j++){
			if (array[i] == array[j]) array[j] = -1;
		}
	}
	printf("Numeros pares:\n");
	// se o resto da divisao por 2 for zero imprima o numero par
	for (int i = 0; i < 10; i++){
		if(array[i] != -1){
			if (array[i] % 2 == 0) printf("%d\n", array[i]);
		}
	}
	// caso contrario imprima  o numero impar
	printf("Numeros impares:\n");
	for (int i = 0; i < 10; i++){
		if(array[i] != -1){
			if (array[i] % 2 != 0) printf("%d\n", array[i]);
		}
	}
	printf("Maior: %d\nMenor: %d\n", max, min);
}

int main(){
	func();
}