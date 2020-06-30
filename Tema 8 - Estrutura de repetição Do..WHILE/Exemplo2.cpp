#include<stdio.h>
int main(){
	
	int num;
	
	do{
		printf("\nInforme um numero Positivo:");
		scanf("%d",&num);
	} while(num<0);
	  printf("Numero positivo: %d",num);
}
