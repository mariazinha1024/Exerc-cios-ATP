/*9:-) Fa�a um algoritmo que receba dois n�meros, verifique se estes s�o pares ou �mpares e exiba a mensagem sobre a situa��o de cada um. Al�m de exibir o resultado das seguintes opera��es, com base na tabela abaixo:
Situa��o
Opera��o entre os N�meros
Dois n�meros pares
Adi��o
Dois n�meros �mpares
Subtra��o
O primeiro ser par e o segundo �mpar
Multiplica��o
O primeiro ser �mpar e o segundo par
Divis�o*/

#include<stdio.h>
int main(){
	int n1, n2;
	float soma, div, mult, sub;
	printf("Digite 2 n�meros:\n");
	scanf("%d%d", &n1, &n2);
	if(n1%2 == 0 && n2%2==0){
		soma = (float)n1+n2;
		printf("A soma deles � %.0f.\n", soma);
	}
	if(n1%2 == 1 && n2%2==1){
		sub = (float)n1-n2;
		printf("A subtra��o deles � %.0f.\n", sub);
	}
	if(n1%2 == 0 && n2%2==1){
		mult = (float)n1*n2;
		printf("A multiplica��o deles � de %.0f.\n", mult);
	}
	if(n1%2 == 1 && n2%2==0){
		div = (float)n1/n2;
		printf("A divis�o deles � de %.2f.\n", div);
	}
}
