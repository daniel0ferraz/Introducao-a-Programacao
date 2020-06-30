#include<stdio.h>
int main(){
	int x, maior,i=1;
	
	do{
		printf("Informe um numero:");
		scanf("%d",&x);
		if(x!=9999)
		{
		if((x>maior) || (i==1))
		   maior=x;  
		   i++;
		}
	}while(x!=9999);
	printf("Maior:%d",maior);
}
