/*8:-) Faça um algoritmo que receba o valor de um depósito e o valor da taxa de juros. Calcule e exiba o valor do depósito, o valor do rendimento e o valor total depois do rendimento.*/

#include<stdio.h>

int main(){
	float capital, montante, taxa, rendimento;
	int tempo;
	
	printf("Digite o valor do capital a ser depositado:\n");
	scanf("%f", &capital);
	printf("Digite a taxa em porcentagem e o tempo do juros em meses:\n");
	scanf("%f%d", &taxa, &tempo);
	
	rendimento = capital*tempo*(taxa/100);
	printf("O capital R$ %.2f depositado teve um rendimento de: %.2f\n", capital, rendimento);
	
	montante = capital + rendimento;
	printf("O montante final foi de: %.2f\n", montante);
}
