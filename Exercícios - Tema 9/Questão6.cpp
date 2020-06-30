#include<stdio.h>
float pcusto,perc,pvenda;

void Venda()
{
	printf("Entre com o preco de custo:");
	scanf("%f",&pcusto);
	printf("Entre com o percentual:");
	scanf("%f",&perc);
}

float Valvenda()
{
	return pvenda = pcusto + (pcusto*perc/100);
}

main()
{
	Venda();
	printf("Valor com Desconto: %.2f",Valvenda());
}


