#include<stdio.h>
float AreaTriangulo(int a, int b)
{
	return(a*b/2);
}
int main()
{
	int base, alt; float res;
	printf("Informe a base do triangulo:");
	scanf("%d",&base);
	printf("Informe a altura do triangulo:");
	scanf("%d",&alt);
	res = AreaTriangulo(base,alt);
	printf("A area do Triangulo e: %f\n",res);
}
