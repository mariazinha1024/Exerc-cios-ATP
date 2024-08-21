/*12:-) Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. 
Faça um algoritmo que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. 
Calcule e exiba: 
O valor, em reais, de cada quilowatt;
O valor, em reais, a ser pago por essa residência;
O novo valor a ser pago por essa residência, a partir de um desconto de 15%.*/
#include<stdio.h>
int main(){
	float salariominimo, valorkwh, kwhgasto, desconto, total;
	printf("Qual o salário minimo atual?\n");
	scanf("%f", &salariominimo);
	printf("Qual o kwh usado nessa residencia?\n");
	scanf("%f", &kwhgasto);
	
	valorkwh = salariominimo/5;
	total = kwhgasto*valorkwh;
	desconto = total - (total*15/100);
	printf("O kwh custa R$ %.2f;\nO valor a ser pago sem desconto seria de R$ %.2f;\nO valor a ser pago com 15%% de desconto é de R$ %.2f .\n", valorkwh, total, desconto);
	
	return 0;
}
