#include<stdio.h>
int main()
   {
	 	int num,par=0, impar=0,quantidade=0;
	 	
	 	printf("Digite 20 numeros -0 para sair.\n");
	 	scanf("%d",&num);
	 	
	 	while(num !=0){
	 		quad = num*num;
	 		printf("Quadrado de %d = %d\n",num,quad);
	 		printf("Digite um numero -0 para sair.\n ");
	 		scanf("%d",&num); 
			quantidade ++;	
		  }
		  
		  printf("Quantidade de repeticoes: %d\n",quantidade);
  }
