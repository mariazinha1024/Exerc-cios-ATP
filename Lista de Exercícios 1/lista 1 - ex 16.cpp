/*16:-) Você faz uma aplicação de P reais a uma taxa de juros i constante por um período de n meses. Qual será o montante M após o término da aplicação?*/

#include<stdio.h>
#include<math.h>
int main(){
	float capital, taxa, montante;
	int meses;
	
	printf("Quantos reais de aplicação você deseja fazer?\n");
	scanf("%f", &capital);
	printf("Qual a taxa de juros e por quantos meses?\n");
	scanf("%f%d", &taxa, &meses);
	
	montante = capital * pow((1+taxa/100),meses);
	
	printf("O montante final que você receberá será de R$ %.2f.\n", montante);
	
}
