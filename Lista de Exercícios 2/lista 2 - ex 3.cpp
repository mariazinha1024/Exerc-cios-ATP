/*3:-) No curso de Bacharelado em Ci�ncia da Computa��o, a nota final do estudante � calculada a partir de 3 notas atribu�das respectivamente a um trabalho de laborat�rio, a uma avalia��o semestral e a 
um exame final. As notas variam de 0 a 10 e a nota final � a m�dia ponderada das 3 notas mencionadas. A tabela a seguir fornece os pesos das notas:
Laborat�rio    ->     peso 2
Av. Semestral  ->     peso 3
Exame Final    ->     peso 5
Fa�a um algoritmo que receba as 3 notas do estudante, calcule e imprima a m�dia final e o conceito desse estudante. O conceito segue a tabela abaixo:

8.0  a  10.0 A
7.0  a  8.0  B
6.0  a  7.0  C
5.0  a  6.0  D
<  5.0		 E
*/
#include<stdio.h>
int main(){
	float nlab, navs, nexame, media;
	
	printf("Insira a nota de Laborat�rio do aluno:\n");
	scanf("%f", &nlab);
	printf("Insira a nota da avalia��o semestral do aluno:\n");
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
