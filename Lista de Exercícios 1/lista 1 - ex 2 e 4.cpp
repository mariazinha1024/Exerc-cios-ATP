/*2:-) Dados dois n�meros inteiros e distintos, construa um algoritmo que seja capaz de definir qual � o maior elemento.*/
/*4:-) Dados dois n�meros inteiros, construa um algoritmo que seja capaz de definir se estes s�o iguais, e caso isso n�o ocorrer, qual � o menor elemento.*/

#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a == b)
		printf("%d � igual a %d\n", a, b);
	if(a>b)
		printf("%d � maior que %d\n", a, b);
	if(a<b)
		printf("%d � menor que %d\n", a, b);
	return 0;
}
