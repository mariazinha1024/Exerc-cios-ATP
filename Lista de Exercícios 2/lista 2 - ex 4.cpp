/*4:-) Fa�a um algoritmo que mostre um menu com as seguintes op��es:
soma;
raiz quadrada;
finalizar.	
O algoritmo deve receber a op��o desejada, receber os dados necess�rios para a opera��o de cada op��o, realizar a opera��o e exibir o resultado. 
Na op��o finalizar, apenas deve-se exibir uma mensagem a respeito.*/

#include<stdio.h>
#include<math.h>
int main(){
	float soma, raiz, n1, n2;
	int opc;
	
	printf("Qual opera��o voc� deseja fazer?\n[1] Soma\n[2] Ra�z Quadrada\n[3] Finalizar\n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:{
			printf("## SOMA ##\nEscolha 2 n�meros para som�-los:\n");
			scanf("%f%f", &n1, &n2);
			soma = n1+n2;
			printf("O resultado da soma � %.2f", soma);
			break;
		}
		
		case 2:{
			printf("## Ra�z Quadrada ##\nEscolha 1 n�mero para fazer a ra�z quadrada dele:\n");
			scanf("%f", &n1);
			raiz = sqrt(n1);
			printf("O resultado da raiz quadrada � %.2f", raiz);
			break;
		}

			
		case 3: break;
	
	}
	
	return 0;
}
