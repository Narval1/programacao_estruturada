/*
Implemente um algoritmo para ler o número de alunas e alunos matriculados na disciplina de Programação Estruturada. A estrutura de seleção é utilizada para verificar se a sala de aula possui a MESMA quantidade de alunos e alunas OU se possui MAIS alunas do que alunos OU se possui MAIS alunos do que alunas. Caso uma dessas verificações seja VERDADEIRA, o algoritmo deve escrever uma mensagem específica. Por exemplo, para as seguintes ENTRADAS: 

10
10

A seguinte mensagem deve ser impressa (SAÍDA): 

Mesma quantidade!

Entretanto, para as ENTRADAS:

5
1

A SAÍDA deve ser: 

Quantidade de alunas eh maior do que de alunos!

Por fim, para as ENTRADAS:

3
11

Deve-se imprimir (SAÍDA): 

Quantidade de alunos eh maior do que de alunas!
*/
#include <stdio.h>

int main(){
	int aluno, aluna;
	scanf("%d%d", &aluna,&aluno);
	if(aluna > aluno) printf("Quantidade de alunas eh maior do que de alunos!");
	else if(aluno > aluna) printf("Quantidade de alunos eh maior do que de alunas!");
	else printf("Mesma quantidade!");

}