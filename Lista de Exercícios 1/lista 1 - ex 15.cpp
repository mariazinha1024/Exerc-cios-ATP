/*15:-) Um comerciante deseja saber qual � o lucro percentual que ele est� tendo com a venda de mercadorias. 
Calcule o lucro percentual de uma mercadoria ao serem fornecidos o pre�o de compra e o pre�o de venda da mesma.*/
#include<stdio.h>
int main(){
	float valorcompra, valorvenda, valorlucro, perc;
	printf("Por qual valor voc� compra o produto?\n");
	scanf("%f", &valorcompra);
	printf("Por qual valor voc� vende o produto?\n");
	scanf("%f", &valorvenda);
	
	perc = ((valorvenda - valorcompra) / valorcompra) * 100;
	
	printf("Voc� tem %.2f%% de lucro\n", perc);
	
}
