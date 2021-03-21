/*
Faça um programa que leia, pelo teclado, um vetor inteiro com 6 posições. Verifique se existem valores IGUAIS e os escreva na tela. Caso NÃO existem valores iguais, a seguinte mensagem deve ser impressa: "Nao existem valores iguais!".
*/

#include <stdio.h>
#include <stdbool.h>

void main(){
    int array1[6], array2[6];

    for (int i = 0 ; i < 6; i++){ 
    scanf("%d", &array1[i]);
    array2[i] = -1;
    }

    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j < 6; j++) if (array1[i] == array1[j]) array2[i] = array1[i];
    }
    int sum = 0;
    for (int i = 0; i < 6; i++){
        if (array2[i] != -1) printf("%d\n", array2[i]);
        sum = sum + array2[i];
    }
    if (sum == -6) printf("Nao existem valores iguais!\n");
}