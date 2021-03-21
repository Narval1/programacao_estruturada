/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que LEIA os dados de QUATRO alunos e os armazena nessa estrutura. 
Em seguida, exiba o NOME e as NOTAS do aluno que possui a MAIOR média geral dentre os quatro.
*/
# include <stdio.h>

struct aluno {
    int RA;
    char nome[50];
    float P1;
    float P2;
    float P3;
};
int main(void){
	struct aluno aluno[4];
    float melhorMedia = 0;
    int iMelhorMedia;

	for(int i = 0; i < 4; i++){
        scanf("%i", &aluno[i].RA);
        scanf("%s", aluno[i].nome);
        scanf("%f", &aluno[i].P1);
        scanf("%f", &aluno[i].P2);
        scanf("%f", &aluno[i].P3);

        if((aluno[i].P1 + aluno[i].P2 + aluno[i].P3) / 3 > melhorMedia){
            iMelhorMedia = i;
            melhorMedia = (aluno[i].P1 + aluno[i].P2 + aluno[i].P3) / 3;
        }
	}

	printf("%i\n", aluno[iMelhorMedia].RA);
	printf("%s\n", aluno[iMelhorMedia].nome);
	printf("%.1f\n", aluno[iMelhorMedia].P1);
	printf("%.1f\n", aluno[iMelhorMedia].P2);
	printf("%.1f\n", aluno[iMelhorMedia].P3);

	return 0;
}