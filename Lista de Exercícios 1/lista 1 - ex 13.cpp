/*13:-) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e exiba:
O peso dessa pessoa em gramas;
Se essa pessoa engordar 5%, qual será seu novo peso em gramas.*/
#include<stdio.h>
int main(){
	int peso, novopeso, pesog;
	printf("Qual o seu peso, em valor inteiro?\n");
	scanf("%d", &peso);
	pesog = peso*1000;
	novopeso = pesog + (pesog*5/100);
	printf("Seu peso %d em gramas é de %d, se você engorder 5%%, seu peso será de %d gramas.\n", peso, pesog, novopeso);
	
	return 0;
}
