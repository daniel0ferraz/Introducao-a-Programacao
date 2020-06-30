#include<stdio.h>
int main(){
	      /*
		  Crie um programa que calcula o desconto previdenciário de dez funcionários. 
		  Dado um salário, o programa deve retornar o valor do desconto proporcional ao
		  mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto,
		  o valor máximo de desconto é 318,20. Sendo assim, ou o programa retorna o valor equivalente a
		  11% sobre o salário ou 318,20. 
		  */
		  int i;
		  float sal,prev;
		  
		  for(i=1;i<=10;i++)
		  {
		  	printf("\n Informe o salario: ");
		  	scanf("%f",&sal);
		  	
		  	prev= sal*11/100;
		  	if(prev>318.20){
		  		prev=318.20;
		  		printf("\n Salario: %.2f",prev);
			  }
		  	
		  }
		  }
