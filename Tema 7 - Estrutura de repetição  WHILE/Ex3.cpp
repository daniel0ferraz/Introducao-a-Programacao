#include<stdio.h>
int main(){
	    int idade, soma,cont;
	    float media;
	    soma = 0;
	    cont = 0;
	    
	    printf("\n Informe uma idade: (Digite 0 para sair!)");
	    scanf("%d",&idade);
	    
	    while(idade!=0){
	    	soma = soma + idade;
	    	cont++;
	    	
		    printf("\n Informe uma idade: (Digite 0 para sair!)");
		    scanf("%d",&idade);
		}if(cont>0){
			media = soma/cont;
			printf("Media das idades: %.1f",media);
	   }else{
	    	printf("Nao foi informado uma idade valida!");
		} 
}
