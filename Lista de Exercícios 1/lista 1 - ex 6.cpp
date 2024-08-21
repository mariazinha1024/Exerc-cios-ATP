/*6:-) Elaborar um algoritmo, que faça a conversão de graus Fahrenheit para Celsius. O algoritmo deve ler um valor em graus Fahrenheit e transformá-lo através da fórmula*/
#include<stdio.h>

int main(){
	float grauf, celsius;
	scanf("%f", &grauf);
	celsius = ((grauf-32)*5)/9;
	printf("O %.1fF em Celcius é: %.1f.", grauf, celsius);
	
	return 0;
}
