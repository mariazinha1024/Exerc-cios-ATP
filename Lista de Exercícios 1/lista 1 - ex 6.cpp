/*6:-) Elaborar um algoritmo, que fa�a a convers�o de graus Fahrenheit para Celsius. O algoritmo deve ler um valor em graus Fahrenheit e transform�-lo atrav�s da f�rmula*/
#include<stdio.h>

int main(){
	float grauf, celsius;
	scanf("%f", &grauf);
	celsius = ((grauf-32)*5)/9;
	printf("O %.1fF em Celcius �: %.1f.", grauf, celsius);
	
	return 0;
}
