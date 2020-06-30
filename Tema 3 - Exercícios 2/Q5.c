#include<stdio.h>
main()
{
    /*. Escrever um algoritmo que leia o valor de uma compra em dólares, a cotação do dólar no dia da compra, o percentual de ICMS e o percentual de lucro da empresa. Calcule e escreva o valor a ser pago em reais, sabendo-se que o percentual de lucro e o percentual de ICMS incidem sobre o valor em reais.*/

    float compra, cotacao, icms, lucro, reais;


    printf("\n Informe o valor da compra em dolares:");
    scanf("%f",&compra);
    printf("\n Qual e a cotacao do dolar hoje:");
    scanf("%f",&cotacao);
    printf("\n Qual e o porcentual de lucro da empresa: ");
    scanf("%f",&lucro);

    reais = compra *cotacao + 1/100;

    printf("o valor a ser pago sera %.2f",reais);


}