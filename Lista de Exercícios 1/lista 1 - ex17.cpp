/*17:-) Um trabalhador recebe R$ 20,00 por hora normal trabalhada e um acréscimo de 50% sobre este valor, para cada hora extra trabalhada. 
Calcule qual o valor de seu salário após uma semana de trabalho, com jornada de 44 horas semanais. 
O algoritmo deverá, inicialmente, requisitar ao usuário qual foi a quantidade de horas que o trabalhador realmente trabalhou na semana.*/
#include<stdio.h>
int main(){
	int horas, horaextra;
	float salario, horaextrav;
	
	printf("Quantas goras você trabalhou essa semana?\n");
	scanf("%d", &horas);
	
	horaextra = horas-44;
	
	if(horaextra>=0){
		horaextrav = (float)horaextra * (20 + (20 * 50 /100));
		salario = 44*20 + horaextrav;
		printf("O salário dessa semana será de R$ %.2f\n", salario);
	} 
	else{
		salario = (float)horas * 20;
		printf("O salário dessa semana será de R$ %.2f\n", salario);

	}
	return 0;
}
