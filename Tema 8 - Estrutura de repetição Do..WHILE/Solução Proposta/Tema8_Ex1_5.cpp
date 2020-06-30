#include<stdio.h>
main()
{
	int PT,ST,TS,FN,X;
	printf("\n Entre com o numero de termos: "); scanf("%d",&FN);
	if (FN<2)
	  printf("\n O numero deve ser maior ou igual a 2");
	else
	{
	  PT=0; ST=1; X=2;
	  printf("%d ",PT);
	  printf(", %d ",ST);
	  do
	  {
	  	TS=PT+ST;
	  	printf(", %d ",TS);
	  	PT=ST;
	  	ST=TS;
	  	X++;
	  }
	  while(X<FN);
	}
}
