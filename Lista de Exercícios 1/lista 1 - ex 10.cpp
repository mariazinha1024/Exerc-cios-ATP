/*10:-) Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e exiba o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do sal�rio, 
e tamb�m, o valor l�quido do sal�rio a receber.*/

#include<stdio.h>
int main(){
	float salario, imposto, salariofinal;
	printf("Digite seu sal�rio para carcularmos o IR:\n");
	scanf("%f", &salario);
	imposto = salario*5/100;
	salariofinal = salario - imposto;
	
	printf("O imposto do sal�rio R$ %.2f foi de: R$ %.2f.\nO sal�rio final � de: R$ %.2f\n", salario, imposto, salariofinal);
	
	return 0;
}
