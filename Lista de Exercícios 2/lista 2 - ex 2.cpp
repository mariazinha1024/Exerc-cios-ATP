/*2:-) Faça um algoritmo que calcule e exiba o salário reajustado de um funcionário de acordo com a seguinte regra:
salários até 300, reajuste de 50%;
salários maiores que 300, reajuste de 30%*/

#include<stdio.h>
int main(){
	float salario, salarionovo;
	printf("Qual seu salário atual?\n");
	scanf("%f", &salario);
	
	if(salario <= 300){
		salarionovo = salario + (salario*50/100);
		printf("Seu salário novo será de R$ %.2f.\n", salarionovo);
	}
	else{
		salarionovo = salario + (salario*30/100);
		printf("Seu salário novo será de R$ %.2f.\n", salarionovo);
	}
	
	return 0;
}
