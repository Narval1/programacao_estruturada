/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o NOME do atleta, sua 
IDADE e ALTURA. Agora, implemente um algoritmo que leia os dados de QUATRO atletas, calcule e exiba os NOMES do atleta MAIS ALTO e do MAIS VELHO.
*/
# include <stdio.h>

struct atleta{
    char nome[50];
    int idade;
    float altura;
};

void main(){
    int size = 4;
    struct atleta array[size];
    int maiorIdade = 0, resp1, resp2;
    float maiorAltura = 0;

    for (int i = 0; i < size; i++) {
        scanf("%s", array[i].nome);
        scanf("%d", &array[i].idade);
        scanf("%f", &array[i].altura);
        if (maiorIdade < array[i].idade) {
            maiorIdade = array[i].idade;
            resp1 = i;
        }
        if (maiorAltura < array[i].altura) {
            maiorAltura = array[i].altura;
            resp2 = i;
        }
    }
    printf("Mais alto: %s\nMais velho: %s\n", array[resp2].nome, array[resp1].nome);
}