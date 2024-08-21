/*11:-) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário 
sabendo-se que este sofreu um aumento de 25%, e também, o salário anterior e o reajuste, separadamente.*/
#include<stdio.h>
int main(){
	float salario, salarioliquido, aumento;
	printf("Qual seu salário atual?\n");
	scanf("%f", &salario);
	aumento = salario*25/100;
	salarioliquido = salario+aumento;
	printf("Seu salário R$ %.2f recebeu um aumento de R$ %.2f, agora seu salário é de R$ %.2f\n", salario, aumento, salarioliquido);
	
	return 0;	
}
