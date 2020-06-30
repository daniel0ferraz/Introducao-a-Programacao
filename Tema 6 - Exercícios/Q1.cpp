#include<stdio.h>

/*
Tema 6 - Exercícios 1
1- Faça um programa que leia cinco temperaturas em graus Celsius 
e apresente-as convertidas em graus Fahrenheit.A fórmula de conversão
 é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.
*/
int main()
{
	float F,C;
	int cont;
	for(cont=1;cont<=5;cont++){
	printf("Informe a temperatura atual: ");
	scanf("%f",&C);
	printf("Temperatura atual: \n%.2f",C);
	
	F=(9 * C + 160)/5;
	printf("\nConvertida em Fahrenheit: \n%.2f",F);	
}	
}
