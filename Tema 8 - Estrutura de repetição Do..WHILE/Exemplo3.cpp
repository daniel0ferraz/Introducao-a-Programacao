#include<stdio.h>
int main(){
	int op,l1,l2;
	float area;
	
	do{
		printf("\n -- Calculo de Areas -- \n");
		printf("1-Quadrado\n");
		printf("2-Triangulo\n");
		printf("3-Retangulo\n");
		printf("4-Sair\n");
		printf("Escolha uma opcao:\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
					printf("Informe o lado do Quadrado:");
					scanf("%d",&l1);
					area = l1*l1;
					printf("Area: %.1\n",area);
					break;
			         }
			         
		    case 2:{
			    	printf("Informe a base do Triangulo:");
					scanf("%d",&l1);
					printf("Informe a altura do Triangulo:");
					scanf("%d",&l2);
					area=(l1*l2)/2;
					printf("Area: %.1f\n",area);
					break;
			        }
			        
		    case 3:{
			    	printf("Informe a base do Retangulo:");
			    	scanf("%d",&l1);
					printf("Informe a altura do Retangulo:");
					scanf("%d",&l2);
					area=(l1*l2)/2;
					printf("Area: %.1f\n",area);
					break;
					}
					
		    case 4:{
			    	printf("Saindo...");
					break;
					}
					
			default :{
					printf("\n Opcao invalida!!");
					break;
					}		 
		}
	}while(op!=0);
}
