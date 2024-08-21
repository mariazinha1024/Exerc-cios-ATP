/*9:-) Faça um algoritmo que receba dois números, verifique se estes são pares ou ímpares e exiba a mensagem sobre a situação de cada um. Além de exibir o resultado das seguintes operações, com base na tabela abaixo:
Situação
Operação entre os Números
Dois números pares
Adição
Dois números ímpares
Subtração
O primeiro ser par e o segundo ímpar
Multiplicação
O primeiro ser ímpar e o segundo par
Divisão*/

#include<stdio.h>
int main(){
	int n1, n2;
	float soma, div, mult, sub;
	printf("Digite 2 números:\n");
	scanf("%d%d", &n1, &n2);
	if(n1%2 == 0 && n2%2==0){
		soma = (float)n1+n2;
		printf("A soma deles é %.0f.\n", soma);
	}
	if(n1%2 == 1 && n2%2==1){
		sub = (float)n1-n2;
		printf("A subtração deles é %.0f.\n", sub);
	}
	if(n1%2 == 0 && n2%2==1){
		mult = (float)n1*n2;
		printf("A multiplicação deles é de %.0f.\n", mult);
	}
	if(n1%2 == 1 && n2%2==0){
		div = (float)n1/n2;
		printf("A divisão deles é de %.2f.\n", div);
	}
}
