/*1:-) Fa�a um algoritmo que receba tr�s notas de um aluno, calcule a m�dia aritm�tica entre as tr�s notas e exiba mensagem de �Aprovado� ou �Reprovado�, considerando a m�dia de aprova��o maior ou igual a 7,0.*/

#include<stdio.h>
int main(){
	float n1, n2, n3, media;
	printf("Digite as 3 notas do aluno:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	if(media >= 7.0)
		printf("Aprovado, m�dia: %.2f\n", media);
	else
		printf("Reprovado, m�dia: %.2f\n", media);
	
	return 0;
}
