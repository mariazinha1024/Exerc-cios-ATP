/*3:-) Ap�s o conhecimento de um numerador e um denominador, construa um algoritmo para fornecer o resto desta divis�o.*/

#include<stdio.h>
int main(){
	int num, den, resto;
	printf("Digite um numerador:\n");
	scanf("%d", &num);
	printf("Digite um denominador:\n");
	scanf("%d", &den);
	resto = num%den;
	printf("O resto da divis�o � igual a %d", resto);
}
