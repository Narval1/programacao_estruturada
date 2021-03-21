/*
Escreva um programa que leia o número de alunos e de alunas de uma sala. Como saída, o programa deve apresentar o número de alunos, de alunas e o total de alunos na sala. 
*/
#include <stdio.h>

int main(){
	int alunos, alunas;
	scanf("%d%d", &alunos, &alunas);
	printf("Alunos: %d\nAlunas: %d\nTotal: %d",alunos, alunas,alunos + alunas);
}