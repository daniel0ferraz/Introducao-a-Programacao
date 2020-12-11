#include<stdio.h>
int main(){
	
	/*
	 Faça um programa que leia dois valores para as variáveis A e B 
	 e efetue a troca dos valores de forma que a variável A passe a 
	 possuir o valor da variável B e a variável B passe a possuir o
	 valor da variável A. Apresente os valores trocados. O programa 
	 deverá permitir a troca dos números cinco vezes. 
	*/
	
	int A,B,i,rec;
	for(i=1;i<=5;i++) {
		
	    printf("\n Informe um valor para A: "); scanf("%d",&A);
	    printf("\n Informe um valor para B: "); scanf("%d",&B);
		
	    rec=A;
	    A=B;
	    B=rec;
		
	    printf("\n Valor de A: %d",A);
	    printf("\n Valor de B: %d",B);
		
	}
}
