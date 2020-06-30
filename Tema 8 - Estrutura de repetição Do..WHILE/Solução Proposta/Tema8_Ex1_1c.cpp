#include<stdio.h>
main()
{
	int num,soma=0,q=0;
	float media;
	
	
	do
	{
		printf("\n Numero: "); scanf("%d",&num);
		soma=soma+num; //ou soma+=num;
		q=q+1;  //ou q++;
		
	}while(num!=9999);
	soma=soma-9999;
	q--;
	media=soma/q;
	printf("\n Soma = %d",soma);
	printf("\n Media = %4.1f",media);
}
