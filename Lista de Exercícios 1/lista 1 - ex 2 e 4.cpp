/*2:-) Dados dois números inteiros e distintos, construa um algoritmo que seja capaz de definir qual é o maior elemento.*/
/*4:-) Dados dois números inteiros, construa um algoritmo que seja capaz de definir se estes são iguais, e caso isso não ocorrer, qual é o menor elemento.*/

#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a == b)
		printf("%d é igual a %d\n", a, b);
	if(a>b)
		printf("%d é maior que %d\n", a, b);
	if(a<b)
		printf("%d é menor que %d\n", a, b);
	return 0;
}
