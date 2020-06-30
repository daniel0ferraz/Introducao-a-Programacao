#include<stdio.h>
int n1; // global
int Square ()
{
	return (n1*n1);
}
int main()
{
	int n2; //local
	printf("Entre com um numero:");
	scanf("%d",&n1);
	n2 = Square ();
	printf("O seu quadrado vale: %d\n",n2);
}
