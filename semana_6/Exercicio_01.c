/*
Implemente um programa que leia, por meio do teclado, o NOME e a IDADE de uma pessoa e 
armazene esses dados em uma ESTRUTURA. Em seguida, imprima na tela os dados da estrutura lida.
*/
#include <stdio.h>

struct dados {
    char nome[50];
    int idade;
};

void main(){
	struct dados dados;

	scanf("%s", dados.nome);
	scanf("%i", &dados.idade);

	printf("Nome: %s\n", dados.nome);
    printf("Idade: %i\n", dados.idade);

}