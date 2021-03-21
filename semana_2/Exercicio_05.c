/*
Elabore um programa que solicite, na seguinte ordem, ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (/).
*/
#include <stdio.h>

int main(){
	int n,m,o;
	scanf("%d%d%d",&n,&m,&o);
	printf("%d/%d/%d",n,m,o);
}