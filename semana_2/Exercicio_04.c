/*
Implemente um algoritmo para calcular e comparar a área de dois retângulos A e B. Antes de calcular a área, o algoritmo deve verificar se os dados de entrada (base e altura) representam um retângulo. Caso a resposta seja positiva, deve-se verificar qual retângulo possui a maior área ou se eles possuem tamanhos iguais. Vale ressaltar que os dados de entrada (do tipo float) devem seguir a seguinte ordem:

Base do retângulo A;
Altura do retângulo A;
Base do retângulo B;
Altura do retângulo B.
*/
#include <stdio.h>

int main() {
  float a,b,c,d;
  scanf("%f%f%f%f", &a, &b, &c, &d);
  if (a == b || c == d) {
    printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
  }
  else  {
    if (a * b > c * d) {
      printf("A area do retangulo A eh: %f\nA area do retangulo B eh: %f\nA area do retangulo A eh maior do que a do retangulo B!", a*b, c*d);
    }
    else if (a* b < c* d) {
      printf("A area do retangulo A eh: %f\nA area do retangulo B eh: %f\nA area do retangulo B eh maior do que a do retangulo A!", a*b, c*d);
    }
    else {
      printf("A area do retangulo A eh: %f\nA area do retangulo B eh: %f\nA area do retangulo A eh igual ao do retangulo B!", a*b, c*d);
    }
  }
}