/*
A importância de R$780.00 será dividida entre três ganhadores de um concurso, sendo que:

    O primeiro ganhador receberá 46% do total;
    O segundo receberá 32% do total;
    O terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/
#include <stdio.h>

int main(){ 
    float n = 780;
	 printf("Primeiro ganhador: R$ %.6f\nSegundo ganhador: R$ %.6f\nTerceiro ganhador: R$ %.6f",n*0.46,n*0.32,n - n*0.46 - n*0.32);
}