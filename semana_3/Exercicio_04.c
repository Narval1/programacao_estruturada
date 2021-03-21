/*
Implemente um algoritmo que leia um Código de Operação: 

        1: soma dois números (a + b);
        2: soma três números (a + b + c);
        3: multiplicação de dois números (a * b); 
        0: sair. 

Se o usuário digitar a operação SAIR (0), o programa mostra o MENOR resultado obtido, 
considerando SOMENTE as operações realizadas, e ENCERRA. Entretanto, caso NENHUM Código de Operação 
seja selecionado, a seguinte mensagem deve ser impressa: "Nenhum calculo foi realizado!". 
Caso contrário, solicitará a ENTRADA dos números (a e b OU a, b e c) e imprimirá o 
resultado da operação (soma ou multiplicação). Após isso, o programa volta a SOLICITAR 
o Código de Operação para o usuário digitar uma NOVA OPERAÇÃO.
*/

#include <stdio.h>
#include<stdbool.h>

void func(){
	bool ok = true;
	int num1, num2, num3;
	int operator, aux = 10000000;
	while (ok){
	    scanf("%d", &operator);
		switch (operator){
			case 1:
			scanf("%d%d", &num1, &num2);
			printf("(a + b) = %d\n", num1 + num2);
			if (aux > num1 + num2) aux = num1 + num2;
			break;
			case 2:
			scanf("%d%d%d", &num1, &num2, &num3);
			printf("(a + b + c) = %d\n", num1 + num2 + num3);
			if (aux > num1 + num2 + num3) aux = num1 + num2 + num3;
			break;
			case 3:
			scanf("%d%d", &num1, &num2);
			printf("(a*b) = %d\n", num1*num2);
			if (aux > num1*num2) aux = num1*num2;
			break;
			default:
			ok = false;
		}
	}
	if (aux == 10000000) printf("Nenhum calculo foi realizado!");
	else printf("menor resultado: %d\n", aux);
}

int main(){
	func();
}