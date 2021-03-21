/*
Escreva um programa que leia, na seguinte ordem, a quantidade de notebooks das marcas Sony, Dell e Toshiba de uma loja. Os valores devem ser entrados via teclado. Como saída, o programa deve apresentar a quantidade de notebooks discriminadas por marca (Sony, Dell e Toshiba) e o seu total. 
*/
#include <stdio.h>

int main(){
	int sony, dell, toshiba;
	scanf("%d%d%d", &sony, &dell, &toshiba);
	printf("%d notebook(s) da Sony\n%d notebook(s) da Dell\n%d notebook(s) da Toshiba\nTotal de %d notebooks\n",sony, dell,toshiba,sony + dell + toshiba);
}