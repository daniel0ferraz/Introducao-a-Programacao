#include<stdio.h>
main()
{
    /*Uma empresa resolveu conceder descontos de 10% nas vendas superiores a 1000 reais. Faça um programa que leia o valor da venda e informe o valor a ser pago. */

    float venda, valorpg ,desconto;

    printf("Informe o valor da venda:");
    scanf("%f",&venda);

    printf("Valor de desconto da empresa:");
    scanf("%f",&desconto);

    valorpg = (desconto * venda) * 10/100;

    if(venda > 400)
    {
      printf("voce ganhou desconto!");
    } else
    {
        printf(" \n infelizmente voce nao ganhou desconto compra abaixo de 400");
    }
    
      printf("O valor com desconto a ser pago sera: %.2f",valorpg);

}

    
    