/* 8:-) Fa�a um algoritmo que receba o pre�o de um produto e o seu c�digo de origem e exiba a proced�ncia. A proced�ncia obedece a seguinte tabela:
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7, 8 ou 9 Sudeste
10 at� 20 Centro-Oeste
21 at� 30 Noroeste*/
#include<stdio.h>
int main(){
	int codigo;
	float preco;
	printf("Qual o pre�o do produto?\n");
	scanf("%f", &preco);
	printf("Qual o c�digo de origem?\n");
	scanf("%d", &codigo);
	if(codigo == 1)
		printf("Seu produto � do Sul.\n");
	else
		if(codigo == 2)
			printf("Seu produto � do Norte.\n");
		else
			if(codigo == 3)
				printf("Seu produto � do Leste.\n");
			else
				if(codigo == 5 || codigo == 6)
					printf("Seu produto � do Nordeste.\n");
				else
					if(codigo >= 8 && codigo <= 9)
						printf("Seu produto � do Sudeste.\n");
					else
						if(codigo >=10 && codigo <=20)
							printf("Seu produto � do Centro-Oeste.\n");
						else
							printf("Seu produto � do Noroeste.\n");

	return 0;
}
