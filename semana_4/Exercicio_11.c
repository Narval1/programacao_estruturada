/*
Faça um programa que LEIA uma string com 8 caracteres e IMPRIMA as quatro primeiras letras dela. O algoritmo deve imprimir na tela, se a string NÂO tiver 8 caracteres, a quantidade de caractere(s) digitada, mostrando a seguinte mensagem: "Voce digitou uma string com X caractere(s)!", sendo X a quantidade de caracteres digitada. Além disso, um ALERTA deve ser impresso e o usuário deve digitar NOVAMENTE a string: "A string deve ter 8 caracteres. Por favor, digite uma nova string:", caso o usuário NÃO respeitar a quantidade solicitada.
*/

#include <stdio.h>
#include <string.h>

void main(){
    int ok = 1;
    char str[10]; 
    while (ok == 1){ 
        ok = 0; //sponho que esteja certo
        scanf("%s", str);
        int len = strlen(str);
        if (len != 8){
            printf("Voce digitou uma string  com %d caractere (s)!\n", len);
            printf("A string deve ter 8 caracteres. Por favor, digite uma nova string:\n");
            ok = 1;
        }
    }
    for (int i = 0; i < 4; i++) printf("%c", str[i]);
}

