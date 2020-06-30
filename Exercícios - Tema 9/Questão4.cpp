#include<stdio.h>
float vdolar,cdolar,vreal;
void Cotacao()
{
	printf("Entre com a quantidade de dolares:")/
	scanf("%f",&vdolar);
	printf("Entre com a cotacao do dolar atual:");
	scanf("%f",&cdolar);
}
float Conversor()
{
	return vreal = vdolar*cdolar;
}
int main()
{
	Cotacao();
	printf("\n Valor em Reais: %8.2f",Conversor());
}
