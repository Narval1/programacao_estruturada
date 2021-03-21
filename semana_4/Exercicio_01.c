/*
Implemente um algoritmo que leia do teclado SEIS valores inteiros e em seguida mostre na tela os valores lidos na ORDEM INVERSA.
*/

#include <stdio.h>

int main(){
    int array[6];
    for (int i = 0; i < 6; i++) scanf("%d", &array[i]);
    for (int i = 5; i >= 0; i--) printf("%d ", array[i]);
}