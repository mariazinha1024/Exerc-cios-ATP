/*17:-) Um trabalhador recebe R$ 20,00 por hora normal trabalhada e um acr�scimo de 50% sobre este valor, para cada hora extra trabalhada. 
Calcule qual o valor de seu sal�rio ap�s uma semana de trabalho, com jornada de 44 horas semanais. 
O algoritmo dever�, inicialmente, requisitar ao usu�rio qual foi a quantidade de horas que o trabalhador realmente trabalhou na semana.*/
#include<stdio.h>
int main(){
	int horas, horaextra;
	float salario, horaextrav;
	
	printf("Quantas goras voc� trabalhou essa semana?\n");
	scanf("%d", &horas);
	
	horaextra = horas-44;
	
	if(horaextra>=0){
		horaextrav = (float)horaextra * (20 + (20 * 50 /100));
		salario = 44*20 + horaextrav;
		printf("O sal�rio dessa semana ser� de R$ %.2f\n", salario);
	} 
	else{
		salario = (float)horas * 20;
		printf("O sal�rio dessa semana ser� de R$ %.2f\n", salario);

	}
	return 0;
}
