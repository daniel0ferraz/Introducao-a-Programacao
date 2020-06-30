#include<stdio.h>
int main()
{
	int visitantes,soma,cont;
	float media;
	soma = 0;
	cont = 0;
	
	printf("\n Informe a quantidade de visitantes (0 para sair!): ");
	scanf("%d",&visitantes);
	while(visitantes!=0){
		soma = soma + visitantes;
		cont++;
		
		printf("\n Informe a quantidade de visitantes (0 para sair!): ");
		scanf("%d",&visitantes);
	} if(cont>0){
		media = soma/cont;
		printf("media de visitantes e: %.1f",media);
	}else{
		printf("Nao foi informado nenhum visitante!");
	}
}
