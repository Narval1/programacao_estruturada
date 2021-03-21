#include <stdio.h>

int Factorial(int number){
	if(number == 1) return 1;
	return number*Factorial(number - 1);
}

int main(){
	int number;
	float aux = 1, e = 0;
	scanf("%d", &number);
	for (int index = 1; index <= number; index++) e = e + aux/Factorial(index);
	printf("%.6f", e);
}