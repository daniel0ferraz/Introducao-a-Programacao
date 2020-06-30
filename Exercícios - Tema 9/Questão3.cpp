#include<stdio.h>
float valor,nvalor,desconto;

void Entrada()
{
	printf("\n Entre com o calor do produto:");
	scanf("%f",&valor);
}

float Desconto()
{
	return desconto = (valor*9/100) ;
}

float Nvalor()
{
	return nvalor = (valor-desconto);
}

int main()
{
	Entrada();
	printf("Desconto = %.2f\n",Desconto());
	printf("Valor com desconto = %.2f",Nvalor());
}
