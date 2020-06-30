#include<stdio.h>
int main()
    /*Faça um programa que leia 20 números positivos e calcule a quantidade
	 de números pares e ímpares, a média de valores pares e a média geral dos 
	 números lidos. */
{
	int num,par=0,impar=0;
	
	printf("Digite 20 número (zero) para sair.\n");
	scanf("%d",&num);
	while(num!=0){
		printf("Digite 20 números (zero) para sair.\n");
		scanf("%d",&num);
		
		if(num%2==0){
			par++;
		} else{
			impar++;
		}
	}
	printf("\n Numeros Pares: %d",par);
	printf("\n Numeros Impares: %d",impar);
}
