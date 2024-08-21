/*5:-) Faça um algoritmo que receba a idade de uma pessoa e exiba, esta idade e se é de maioridade ou não.*/

#include<stdio.h>
int main(){
	int idade;
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	if(idade<18)
		printf("Menor de idade.\n");
	else
		printf("Maior de idade.\n");	
	return 0;
}
