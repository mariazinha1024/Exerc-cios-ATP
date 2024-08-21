/*3:-) Após o conhecimento de um numerador e um denominador, construa um algoritmo para fornecer o resto desta divisão.*/

#include<stdio.h>
int main(){
	int num, den, resto;
	printf("Digite um numerador:\n");
	scanf("%d", &num);
	printf("Digite um denominador:\n");
	scanf("%d", &den);
	resto = num%den;
	printf("O resto da divisão é igual a %d", resto);
}
