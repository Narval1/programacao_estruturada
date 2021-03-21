/*
Usando a estrutura “atleta” do exercício anterior, implemente um algoritmo que LEIA os dados de QUATRO atletas 
e os exiba por ordem de IDADE, do mais velho para o mais novo.
*/
# include <stdio.h>

struct atleta{
    char nome[50];
    int idade;
    float altura;
};

void swap(struct atleta *number1, struct atleta *number2){
    struct atleta temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void bubbleSort(struct atleta *array, int size){
    int ok = 0;

    while (ok == 0) {
        ok = 1; //suponho que esta ordenado
        for (int i = 0; i < size - 1; i++){
            if (array[i].idade < array[i + 1].idade){
                swap(&array[i], &array[i + 1]);
                ok = 0;
            }
        }
    }
}

void main(){
    int size = 4;
    struct atleta array[size];

    for (int i = 0; i < size; i++) {
        scanf("%s", array[i].nome);
        scanf("%d", &array[i].idade);
        scanf("%f", &array[i].altura);
    }
    bubbleSort(array, size);
    for (int i = 0; i < size; i++) printf("%d\n", array[i].idade);
}