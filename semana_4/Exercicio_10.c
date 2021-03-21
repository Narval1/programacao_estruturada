/*
LEIA um vetor com 10 números de ponto flutuante. Em seguida, ORDENE os elementos desse vetor e IMPRIMA o vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(float *number1, float *number2){
    float temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void bubbleSort(float *array, int size){
    int ok = 0;

    while (ok == 0) {
        ok = 1; //suponho que esta ordenado
        for (int i = 0; i < size - 1; i++){
            if (array[i] > array[i + 1]){
                swap(&array[i], &array[i + 1]);
                ok = 0;
            }
        }
    }
}

void main(){
    int size = 10;
    float array[size];
    for (int i = 0; i < size; i++) scanf("%f", &array[i]);
    bubbleSort(array, size);
    for (int i = 0; i < size; i++) printf("%.1f\n", array[i]);
}