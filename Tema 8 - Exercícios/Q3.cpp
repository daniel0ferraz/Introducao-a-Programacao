#include<stdio.h>
int main(){
	
	int num, par=0,impar=0;
	
	do{
		printf("Informe um conjunto de numeros:");
		scanf("%d",&num);
		
		if(num==9999)
		break;
		if(num%2==0)
	  	par++;
		else
	  	impar++;
	}
	while(num!=9999);
	printf("\nQuantidade de Pares: %d\n",par);
	printf("Quanridade de Impar: %d\n",impar);
}
