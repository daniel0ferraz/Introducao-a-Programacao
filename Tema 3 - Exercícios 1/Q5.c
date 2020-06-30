#include<stdio.h>
main()
{
    float reais,dolar,cotacao;

    printf("Quantos folares voce tem guardado: ");
    scanf("%f",&dolar);
     
     printf("Qual e a cotacao do dolar:");
     scanf("%f",&cotacao);

     reais = dolar*cotacao;
     printf("Voce possui %.2f convertido em reais",reais);

}