#include<stdio.h>
float nota1, nota2, media;
void leitura(){
	printf("Digite a primeira nota:");
	scanf("%f",&nota1);
	printf("Digite a segunda nota:");
	scanf("%f",&nota2);	
}
void saida()
{
	printf("Media = %.1f",media);
}

int main(){
	leitura();
	media = (nota1+nota2)/2;
    saida();
}
