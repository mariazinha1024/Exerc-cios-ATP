/*1:-) Fa�a um algoritmo que receba quatro notas de um aluno, calcule e exiba a m�dia aritm�tica das notas e a mensagem de �Aprovado� para a m�dia superior ou igual a 7.0 
ou a mensagem de �Reprovado� para a m�dia inferior a 7.0.*/
#include<stdio.h>
int main(){
	float n1, n2, n3, n4, media;
	printf("Digite as 4 notas do aluno:\n");
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	
	media = (n1+n2+n3+n4)/4;
	
	if(media >= 7.0){
		printf("Aluno aprovado com %.2f\n", media);
	}
	else
		printf("Aluno reprovado com %.2f\n", media);
	
	return 0;
}
