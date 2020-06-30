#include<stdio.h>
main()
{
	int x,QPares=0,QImpares=0;
	do
	{
		printf("\n Entre com o numero: "); scanf("%d",&x);
		if(x==9999)
		 break;
		if(x%2==0)
		  QPares++;
		else
		  QImpares++;
	}
	while(x!=9999);
	printf("\n Quantidade de pares: %d",QPares);
	printf("\n Quantidade de impares: %d",QImpares);
}
