/*14:-) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e exiba:
A idade dessa pessoa;
Essa idade convertida em semanas.*/

#include<stdio.h>
int main(){
	int anoatual, anonasc, idade, semana;
	printf("Em que ano você nasceu?\n");
	scanf("%d", &anonasc);
	printf("Que ano é hoje?\n");
	scanf("%d", &anoatual);
	idade = anoatual - anonasc;
	semana = idade*52;
	
	printf("Você tem %d anos (se contarmos apenas os anos) e %d semanas de vida.\n", idade, semana);
	
}
