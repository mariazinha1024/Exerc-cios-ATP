/*12:-) Sabe-se que o quilowatt de energia custa um quinto do sal�rio m�nimo. 
Fa�a um algoritmo que receba o valor do sal�rio m�nimo e a quantidade de quilowatts gasta por uma resid�ncia. 
Calcule e exiba: 
O valor, em reais, de cada quilowatt;
O valor, em reais, a ser pago por essa resid�ncia;
O novo valor a ser pago por essa resid�ncia, a partir de um desconto de 15%.*/
#include<stdio.h>
int main(){
	float salariominimo, valorkwh, kwhgasto, desconto, total;
	printf("Qual o sal�rio minimo atual?\n");
	scanf("%f", &salariominimo);
	printf("Qual o kwh usado nessa residencia?\n");
	scanf("%f", &kwhgasto);
	
	valorkwh = salariominimo/5;
	total = kwhgasto*valorkwh;
	desconto = total - (total*15/100);
	printf("O kwh custa R$ %.2f;\nO valor a ser pago sem desconto seria de R$ %.2f;\nO valor a ser pago com 15%% de desconto � de R$ %.2f .\n", valorkwh, total, desconto);
	
	return 0;
}
