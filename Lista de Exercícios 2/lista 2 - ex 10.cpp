/*10:-) Fa�a um algoritmo que receba tr�s notas de um aluno, calcule e exiba a m�dia aritm�tica entre essas tr�s notas e uma mensagem que segue a tabela abaixo:
0 |--- 5 Reprovado
5 |--- 7 Exame
7 |---| 10 Aprovado*/
#include<stdio.h>
int main(){
	float n1, n2, n3, media;
	printf("Digite as 3 notas do aluno:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	media = (n1+n2+n3)/3;
	if(media < 5)
		printf("Reprovado.\n");
	else
		if(media >=5 && media < 7)
			printf("Exame.\n");
		else
			printf("Aprovado.\n");
	
	return 0;
}
