/*2:-) Fa�a um algoritmo que calcule e exiba o sal�rio reajustado de um funcion�rio de acordo com a seguinte regra:
sal�rios at� 300, reajuste de 50%;
sal�rios maiores que 300, reajuste de 30%*/

#include<stdio.h>
int main(){
	float salario, salarionovo;
	printf("Qual seu sal�rio atual?\n");
	scanf("%f", &salario);
	
	if(salario <= 300){
		salarionovo = salario + (salario*50/100);
		printf("Seu sal�rio novo ser� de R$ %.2f.\n", salarionovo);
	}
	else{
		salarionovo = salario + (salario*30/100);
		printf("Seu sal�rio novo ser� de R$ %.2f.\n", salarionovo);
	}
	
	return 0;
}
