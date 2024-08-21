/* 8:-) Faça um algoritmo que receba o preço de um produto e o seu código de origem e exiba a procedência. A procedência obedece a seguinte tabela:
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7, 8 ou 9 Sudeste
10 até 20 Centro-Oeste
21 até 30 Noroeste*/
#include<stdio.h>
int main(){
	int codigo;
	float preco;
	printf("Qual o preço do produto?\n");
	scanf("%f", &preco);
	printf("Qual o código de origem?\n");
	scanf("%d", &codigo);
	if(codigo == 1)
		printf("Seu produto é do Sul.\n");
	else
		if(codigo == 2)
			printf("Seu produto é do Norte.\n");
		else
			if(codigo == 3)
				printf("Seu produto é do Leste.\n");
			else
				if(codigo == 5 || codigo == 6)
					printf("Seu produto é do Nordeste.\n");
				else
					if(codigo >= 8 && codigo <= 9)
						printf("Seu produto é do Sudeste.\n");
					else
						if(codigo >=10 && codigo <=20)
							printf("Seu produto é do Centro-Oeste.\n");
						else
							printf("Seu produto é do Noroeste.\n");

	return 0;
}
