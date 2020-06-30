#include<stdio.h>
main()
{
	int A,B,AUX,i=0;
	char RESP='S';
	while(RESP=='S')
	{
		printf("\n ----------------");
		printf("\n Entre com valor de A: ");scanf("%d",&A);
		printf("\n Entre com valor de B: ");scanf("%d",&B);
		AUX=A;
		A=B;
		B=AUX;
		printf("\n Valor de A: %d",A);
		printf("\n Valor de B: %d",B);	
		printf("\n\n Nova troca (S/N)? ");
		scanf(" %c",&RESP);
		i=i+1;
	}
		printf("\n Trocas realizadas: %d",i);
}
