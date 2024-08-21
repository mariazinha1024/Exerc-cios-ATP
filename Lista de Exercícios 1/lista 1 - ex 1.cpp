/*1:-) Faça um algoritmo que receba três notas de um aluno, calcule a média aritmética entre as três notas e exiba mensagem de ’Aprovado’ ou ’Reprovado’, considerando a média de aprovação maior ou igual a 7,0.*/

#include<stdio.h>
int main(){
	float n1, n2, n3, media;
	printf("Digite as 3 notas do aluno:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	if(media >= 7.0)
		printf("Aprovado, média: %.2f\n", media);
	else
		printf("Reprovado, média: %.2f\n", media);
	
	return 0;
}
