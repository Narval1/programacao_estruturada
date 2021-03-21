/*
Crie um vetor do tipo char com TAMANHO 8 e implemente um programa para ler uma string com ATÉ 5 caracteres e a IMPRIMA de TRÁS para a FRENTE. Caso o usuário digitar uma string com MAIS de 5 caracteres, a seguinte mensagem deve ser impressa: "Digite novamente a string com ate 5 caracteres:" para que uma NOVA sequência de caracteres seja inserida.
*/  

#include <stdio.h>
#include <string.h>

void main(){
  char str[8];
  int ok = 1, len;
  while (ok == 1){
      ok = 0;
      scanf("%s", str);
      len = strlen(str);
      if (len > 5){
          printf("Digite novamente a string com ate 5 caracteres:\n");
          ok = 1;
      }
  }
  for (int i = len - 1; i >= 0; i--) printf("%c ", str[i]);
}
