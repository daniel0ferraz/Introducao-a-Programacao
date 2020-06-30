#include<stdio.h>
int main()
{
    float nota1, nota2,media;

    printf("\n Informe a primeira nota: ");
    scanf("%f",&nota1);
    printf("\n Informe a segunda nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2)/2;

    if (media >= 7)
      printf("\n Aluno aprovado %.1f",media);

}
