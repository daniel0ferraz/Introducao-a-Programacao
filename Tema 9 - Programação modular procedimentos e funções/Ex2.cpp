#include<stdio.h>
int n1; // global
int Square ()
{
	return (n1*n1);
}
int main()
{
	printf("Entre com um numero:");
	scanf("%d",&n1);
	printf("O seu quadrado vale: %d\n",Square());
}
