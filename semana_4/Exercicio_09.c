/*
Faça um programa para LER 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número imprimindo na tela a seguinte mensagem: "Numero já digitado! Digite outro numero!". Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int func(int *array, int size, int number) {
    for (int i = 0; i < size; i++) {
        if (array[i] == number) return 1;
    }
    return 0;
}

void printArray(int *array,int size){
    for (int i = 0; i < size ;i++) printf("%d ", array[i]);
}

void main() {
    int size = 10;
    int *array = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) array[i] = -100;
    int counter = 0, number;
    while (counter < size) {
        scanf("%d", &number);
        if (func(array, size, number) == 0) {
            array[counter] = number;
            counter++;
        }
        else printf("Numero já digitado! Digite outro numero!\n");
    }
    printArray(array, size);
}