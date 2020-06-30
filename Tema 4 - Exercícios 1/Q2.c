#include<stdio.h>
main()
{
    /*2. Entrar com 3 notas de um aluno e informar a sua situação (APROVADO caso média aritmética >=7 e REPROVADO caso contrário). */
    float n1,n2,n3,media;

    printf("informe a primeira nota:");
    scanf("%f",&n1);

    printf("informe a segunda nota:");
    scanf("%f", &n2);

    printf("informe a terceira nota:");
    scanf("%f", &n3);

    media = (n1 + n2 +n3)/3;

    if(media >= 7){
      printf("Aluno Aprovado!");
    } else
    {
        printf("Aluno Reprovado!");
    }
    
}