/*11:-) Fa�a um algoritmo que receba a idade de uma pessoa e classifique-a seguindo o crit�rio a seguir:
0 a 2 anos Rec�m-nascido
3 a 11 anos Crian�a
12 a 19 anos Adolescente
20 a 55 anos Adulto
Acima de 55 anos Idoso*/
#include<stdio.h>
int main(){
	int idade;
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	if(idade <= 2)
		printf("Rec�m-nascido.\n");
	else
		if(idade >=3 && idade <=11)
			printf("Crian�a.\n");
		else
			if(idade >= 12 && idade <= 19)
				printf("Adolescente.\n");
			else
				if(idade >=20 && idade <=55)
					printf("Adulto.\n");
				else
					printf("Idoso.\n");
					
	return 0;
}
