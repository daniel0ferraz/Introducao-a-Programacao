#include<stdio.h>
float media(float a,float b,float c)
{
	return (a+b+c)/3;
}

int main()
{
	float n1,n2,n3;
	printf("Informe a primeira nota:");
	scanf("%f",&n1);
	printf("Informe a segunda nota:");
	scanf("%f",&n2);
	printf("Informe a terceira nota:");
	scanf("%f",&n3);
	printf("\n Media = %.1f",media(n1,n2,n3));
	
}
