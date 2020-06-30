#include<stdio.h>
int numero;
void Entrada(){
	printf("Entre com um numero inteiro:");
	scanf("%d",&numero);
}

int Quadrado()
{
	return (numero*numero);
}

int main()
{
  Entrada();
  printf("O quadrado do numero: %d e %d\n",numero,Quadrado());
  	
}
