/*13:-) Fa�a um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e exiba:
O peso dessa pessoa em gramas;
Se essa pessoa engordar 5%, qual ser� seu novo peso em gramas.*/
#include<stdio.h>
int main(){
	int peso, novopeso, pesog;
	printf("Qual o seu peso, em valor inteiro?\n");
	scanf("%d", &peso);
	pesog = peso*1000;
	novopeso = pesog + (pesog*5/100);
	printf("Seu peso %d em gramas � de %d, se voc� engorder 5%%, seu peso ser� de %d gramas.\n", peso, pesog, novopeso);
	
	return 0;
}
