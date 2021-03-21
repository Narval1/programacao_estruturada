/*
rie uma estrutura para representar as coordenadas de UM PONTO no plano (posições X e Y). 
Em seguida, declare e leia do teclado DOIS pontos e exiba a distância entre eles.
*/
#include <stdio.h>
#include <math.h>

struct ponto {
    int cord1, cord2;
};

void main(){
	struct ponto ponto1, ponto2;
    float dist;

    scanf("%d%d%d%d", &ponto1.cord1, &ponto1.cord2, &ponto2.cord1, &ponto2.cord2);

    dist = sqrt(pow(ponto1.cord1 - ponto2.cord1, 2) + pow(ponto1.cord2 - ponto2.cord2, 2));
    printf("%.1f\n", dist);
}