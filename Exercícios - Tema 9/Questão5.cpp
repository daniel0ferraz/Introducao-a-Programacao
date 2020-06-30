#include <stdio.h>
float valor,prest;
void Valproduto()
{
	printf("Entre com o valor do produto:");
	scanf("%f",&valor);
}

float Prestacao()
{
	return prest=valor/5;
}
main()
{   
    Valproduto();
	printf("\n Valor das prestacoes: %8.2f",Prestacao());
}
