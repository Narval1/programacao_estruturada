/*
Faça um programa que leia um VETOR de OITO posições. Em seguida, leia também DOIS valores X e Y, que devem ser verificados, quaisquer correspondentes a duas posições no vetor. Se os valores de X e Y forem <0 OU >=8, a seguinte mensagem deve ser impressa: "Valor de X invalido!" ou "Valor de Y invalido!". Após isso, o usuário deve digitar novamente o VALOR correto.  Por fim, 
o seu algoritmo deverá exibir a SOMA dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>
#include <stdbool.h>

void main(){
    int array[8], x, y;
    bool ok = true;
    for (int i = 0; i < 8; i++) scanf("%d", &array[i]);
    while(ok){
        scanf("%d", &x);
        if (x >= 8 || x < 0){
            printf("Valor de X invalido!\n");
        }
        else ok = false;
    }
    ok = true;
    while(ok){
        scanf("%d", &y);
        if (y >= 8 || y < 0){
            printf("Valor de Y invalido!\n");
        }
        else ok = false;
    }
    printf("Soma eh: %d", array[x] + array[y]);
}