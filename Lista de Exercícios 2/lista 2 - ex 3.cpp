/*3:-) No curso de Bacharelado em Ciência da Computação, a nota final do estudante é calculada a partir de 3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral e a 
um exame final. As notas variam de 0 a 10 e a nota final é a média ponderada das 3 notas mencionadas. A tabela a seguir fornece os pesos das notas:
Laboratório    ->     peso 2
Av. Semestral  ->     peso 3
Exame Final    ->     peso 5
Faça um algoritmo que receba as 3 notas do estudante, calcule e imprima a média final e o conceito desse estudante. O conceito segue a tabela abaixo:

8.0  a  10.0 A
7.0  a  8.0  B
6.0  a  7.0  C
5.0  a  6.0  D
<  5.0		 E
*/
#include<stdio.h>
int main(){
	float nlab, navs, nexame, media;
	
	printf("Insira a nota de Laboratório do aluno:\n");
	scanf("%f", &nlab);
	printf("Insira a nota da avaliação semestral do aluno:\n");
	scanf("%f", &navs);
	printf("Insira a nota do exame final do aluno:\n");
	scanf("%f", &nexame);
	
	media = ((nlab*2)+(navs*3)+(nexame*5))/(2+3+5);
	
	if(media >=8.0)
		printf("Conceito A\n");
	if(media >=7.0 && media < 8.0)
		printf("Conceito B\n");
	if(media >=6.0 && media < 7.0)
		printf("Conceito C\n");
	if(media >=5.0 && media < 6.0)
		printf("Conceito D\n");
	if(media < 5.0)
		printf("Conceito E\n");
	
	return 0;	
}
