/*11:-) Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o novo sal�rio 
sabendo-se que este sofreu um aumento de 25%, e tamb�m, o sal�rio anterior e o reajuste, separadamente.*/
#include<stdio.h>
int main(){
	float salario, salarioliquido, aumento;
	printf("Qual seu sal�rio atual?\n");
	scanf("%f", &salario);
	aumento = salario*25/100;
	salarioliquido = salario+aumento;
	printf("Seu sal�rio R$ %.2f recebeu um aumento de R$ %.2f, agora seu sal�rio � de R$ %.2f\n", salario, aumento, salarioliquido);
	
	return 0;	
}
