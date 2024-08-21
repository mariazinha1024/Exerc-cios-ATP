/*7:-) Faça um algoritmo que receba a idade de um nadador e exiba a sua categoria seguindo as regras:
Infantil A
5 – 7 anos
Infantil B
8 – 10 anos
Juvenil A
11 – 13 anos
Juvenil B
14 – 17 anos
Sênior
Maiores de 18 anos*/

#include<stdio.h>
int main(){
	int idade;
	printf("Qual a idade do aluno?\n");
	scanf("%d", &idade);
	
	if(idade < 5)
		printf("Não temos para essa idade.\n");
	else
		if(idade >= 5 && idade <= 7)
			printf("Infantil A.\n");
		else
			if(idade >= 8 && idade <= 10)
				printf("Infantil B.\n");
			else
				if(idade >= 11 && idade <=13)
					printf("Juvenil A.\n");
				else
					if(idade >= 14 && idade <= 17)
						printf("Juvenil B.\n");
					else
						printf("Sênior.\n");
							
	return 0;
}
