/*10:-) Faça um algoritmo que receba o salário de um funcionário, calcule e exiba o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário, 
e também, o valor líquido do salário a receber.*/

#include<stdio.h>
int main(){
	float salario, imposto, salariofinal;
	printf("Digite seu salário para carcularmos o IR:\n");
	scanf("%f", &salario);
	imposto = salario*5/100;
	salariofinal = salario - imposto;
	
	printf("O imposto do salário R$ %.2f foi de: R$ %.2f.\nO salário final é de: R$ %.2f\n", salario, imposto, salariofinal);
	
	return 0;
}
