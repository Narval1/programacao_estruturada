/*
Escreva uma FUNÇÃO que receba por parâmetro uma temperatura em graus Fahrenheit e a RETORNE convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

PS: O cálculo de C deve ser arredondado para DUAS casas decimais.
*/

#include <stdio.h>

void FahrenheitParaCelsius(float *Temperature){
	*Temperature = (*Temperature - 32.0)*(5.0/9.0);
	printf("%.2f\n", *Temperature);
}

void main(){
	float TemperatureInFahrenheit;
	scanf("%f", &TemperatureInFahrenheit);
	FahrenheitParaCelsius(&TemperatureInFahrenheit);

}