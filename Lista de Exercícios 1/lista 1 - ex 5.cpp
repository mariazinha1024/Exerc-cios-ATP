/*5:-) Construa um algoritmo que seja capaz de definir qual o maior elemento entre tr�s conhecidos.*/

#include<stdio.h>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a>b)
        if(a>c)
            printf("%d � o maior\n", a);
    if(b>a)
        if(b>c)
            printf("%d � o maior\n", b);
    if(c>a)
        if(c>b)
            printf("%d � o maior\n", c);
            
    if(a == b && b>c)
    	printf("%d � o maior\n", b);
    if(a == b && b < c)
    	printf("%d � o maior\n", c);
    if(a == c && c > b)
    	printf("%d � o maior\n", c);
    if(a == c && c < b)
    	printf("%d � o maior\n", b);
    if(c == b && b > a)
    	printf("%d � o maior\n", c);
    if(c == b && b < a)
    	printf("%d � o maior\n", a);
    return 0;
}
