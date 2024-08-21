/*7:-) Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e exiba a média ponderada dessas notas.*/

#include<stdio.h>

int main(){
	float n1, n2, media;
	int p1, p2;
	
	printf("Digite a nota 1 e o peso da nota 1:\n");
	scanf("%f%d", &n1, &p1);
	printf("Digite a nota 2 e o peso da nota 2:\n");
	scanf("%f%d", &n2, &p2);
	
	media = (float)(n1*p1+n2*p2)/(p1+p2);
	
	printf("A média é de: %.2f", media);
	
	return 0;
}
