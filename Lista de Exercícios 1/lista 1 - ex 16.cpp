/*16:-) Voc� faz uma aplica��o de P reais a uma taxa de juros i constante por um per�odo de n meses. Qual ser� o montante M ap�s o t�rmino da aplica��o?*/

#include<stdio.h>
#include<math.h>
int main(){
	float capital, taxa, montante;
	int meses;
	
	printf("Quantos reais de aplica��o voc� deseja fazer?\n");
	scanf("%f", &capital);
	printf("Qual a taxa de juros e por quantos meses?\n");
	scanf("%f%d", &taxa, &meses);
	
	montante = capital * pow((1+taxa/100),meses);
	
	printf("O montante final que voc� receber� ser� de R$ %.2f.\n", montante);
	
}
