/*15:-) Um comerciante deseja saber qual é o lucro percentual que ele está tendo com a venda de mercadorias. 
Calcule o lucro percentual de uma mercadoria ao serem fornecidos o preço de compra e o preço de venda da mesma.*/
#include<stdio.h>
int main(){
	float valorcompra, valorvenda, valorlucro, perc;
	printf("Por qual valor você compra o produto?\n");
	scanf("%f", &valorcompra);
	printf("Por qual valor você vende o produto?\n");
	scanf("%f", &valorvenda);
	
	perc = ((valorvenda - valorcompra) / valorcompra) * 100;
	
	printf("Você tem %.2f%% de lucro\n", perc);
	
}
