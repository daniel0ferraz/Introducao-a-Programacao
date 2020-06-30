#include<stdio.h>
float nota1,nota2,nota3,media;

void Entrada()
{
 printf("Informe 3 notas:");
 scanf("%f %f %f",&nota1, &nota2,&nota3);	
}

float Media()
{
	return(nota1+nota2+nota3)/3;
}

int main()
{
	Entrada();
    printf("A media do aluno: %6.2f",Media());
}
