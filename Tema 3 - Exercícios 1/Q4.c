#include<stdio.h>
int main()
{
    /* Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um programa que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%. */

    float produto,nvalor, desconto;

    printf("Informe o valor do produto:");
    scanf("%f",&produto);

    desconto = produto*9/100;
    nvalor = produto - desconto;

    printf(" \n Desconto e %.2f", desconto);
    printf("\no novo valor com desconto:%.2f",nvalor);

}