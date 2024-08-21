/*6:-) Faça um algoritmo que receba a altura e o sexo de uma pessoa, calcule e exiba o seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7 * altura) – 58;
Para mulheres: (62.1 * altura) – 44.7.*/

#include<stdio.h>
int main(){
	char sexo;
	float altura, peso;
	printf("Qual seu sexo biológico?\n[M] Mulher\n[H] Homem\n");
	scanf("%c", &sexo);
	printf("Qual sua altura em metros?\n");
	scanf("%f", &altura);
	if(sexo == 'M'){
		peso = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é igual a %.2f.\n", peso);
	}
	else{
		peso = (72.7*altura) - 58;
		printf("Seu peso ideal é igual a %.2f.\n", peso);
	}
	
	return 0;
}
