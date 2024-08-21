/*9:-) Faça um algoritmo que receba a idade de uma pessoa em anos, calcule e exiba essa idade em: meses, dias, horas e minutos;*/

#include<stdio.h>
int main(){
	int idade, meses, dias, horas, minutos, bissexto;
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	meses = idade*12;
	
	bissexto = idade%4;
	dias = idade*365+bissexto;
	
	horas = dias*24;
	minutos = horas*60;
	
	printf("Sua idade em\nMeses: %d\nDias: %d\nHoras: %d\nMinutos: %d\n", meses, dias, horas, minutos);
	
}
