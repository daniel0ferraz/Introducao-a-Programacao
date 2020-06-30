#include<stdio.h>
int main()
   {
	 	int num,quad,quantidade=0;
	 	
	 	printf("Digite um numero -0 para sair.\n");
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
