/*
Crie um array de caracteres de tamanho 8, LEIA uma string do teclado e CONTE quantas vogais (a, e, i, o, u) ela possui. Entre com UM caractere (vogal ou consoante) e SUBSTITUA todas as VOGAIS da palavra dada por esse caractere. Ao final, imprima a NOVA string e o número de vogais que ela possui.
*/

#include <stdio.h>
#include <string.h>

void main(){
    char str[8], caractere;
    int count = 0;
    scanf("%s %c", str, &caractere);
    for (int i = 0; str[i] != '\0'; i++){
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o'){
          count++;
          str[i] = caractere;
      }
  }
  printf("A string  possui %d vogais.\n%s", count, str);
}

