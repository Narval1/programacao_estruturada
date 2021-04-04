#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(float raio, float *area, float *volume) {
    *area = 4*3.14*pow(raio,2);
    *volume = (4*3.14*pow(raio,3))/3;
}

void main() {
    float raio, area, volume;
    scanf("%f", &raio);
    calc(raio, &area, &volume);
    printf("Area: %.2f\nVolume: %.2f\n", area,volume);
}