#include<stdio.h>
void troca(int n1, int n2){
	int aux;
	aux = n1;
	n1 = n2;
	n2 = aux;
}
int main(){
	int a, b;
	printf("\nDigite doi numeros:");
	scanf("%d %d",&a, &b);
	printf("\nAntres: %d - %d",a,b);
	troca(a,b);
	printf("\nApos: %d - %d",a,b);
}
