/*4:-) Faça um algoritmo que mostre um menu com as seguintes opções:
soma;
raiz quadrada;
finalizar.	
O algoritmo deve receber a opção desejada, receber os dados necessários para a operação de cada opção, realizar a operação e exibir o resultado. 
Na opção finalizar, apenas deve-se exibir uma mensagem a respeito.*/

#include<stdio.h>
#include<math.h>
int main(){
	float soma, raiz, n1, n2;
	int opc;
	
	printf("Qual operação você deseja fazer?\n[1] Soma\n[2] Raíz Quadrada\n[3] Finalizar\n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:{
			printf("## SOMA ##\nEscolha 2 números para somá-los:\n");
			scanf("%f%f", &n1, &n2);
			soma = n1+n2;
			printf("O resultado da soma é %.2f", soma);
			break;
		}
		
		case 2:{
			printf("## Raíz Quadrada ##\nEscolha 1 número para fazer a raíz quadrada dele:\n");
			scanf("%f", &n1);
			raiz = sqrt(n1);
			printf("O resultado da raiz quadrada é %.2f", raiz);
			break;
		}

			
		case 3: break;
	
	}
	
	return 0;
}
