/*
Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica.
Implemente um algoritmo que calcule o valor de qualquer Hn.

PS: O Hn deve ser arredondado para UMA casa decimal.
*/

#include <stdio.h>

int main(){
	float number, harmonic = 0, e = 1;
	scanf("%f", &number);

	for (int i = 1; i <= number; i++){
		harmonic = harmonic + e/i;
	}
	printf("%.1f", harmonic);
}