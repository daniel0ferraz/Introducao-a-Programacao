#include<stdio.h>
main()
{
	int x, soma=0, q=0;
	float media;
	do
	{
	  printf("\n Numero: "); scanf("%d",&x);
	  if(x!=9999)
	  {
	  	soma=soma+x;
		q++;
      }
	}
	while(x!=9999);
	media=soma/q;
	printf("\n Soma= %d",soma);
	printf("\n Media= %6.1f",media);
}
