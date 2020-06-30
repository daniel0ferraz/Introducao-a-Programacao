#include<stdio.h>
int main(){
  	
  	int i;
  	do{
  		printf("\n(1)-");
  		printf("\n(2)-");
  		printf("\n(3)-\n:");
  		scanf("%d",&i);
	  }while((i<1) || (i>3));
	   printf("Fim do Programa!");
}
