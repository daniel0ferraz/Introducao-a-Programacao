#include<stdio.h>
main()
{
    /* Escrever um algoritmo que leia: • a percentagem do IPI a ser acrescido no valor das pecas; • o código da peca 1, valor unitário da peca 1, quantidade de pecas 1; • o código da peca 2, valor unitário da peca 2, quantidade de pecas 2. O algoritmo deve calcular o valor total a ser pago e apresentar o resultado. */
    int  q1, q2, cod1, cod2;
    float API, valor1, valor2, vpg;

    printf("Informe a porcentagem em do API: ");
    scanf("%f",&API);

    printf("informe o valor da peca1:");
    scanf("%f",&valor1);

    printf("infome o codigo da peca 1:");
    scanf("%d",&cod1);

    printf("informe a quantidade de pecas1:");
    scanf("%d",&q1);

    printf("informe o codigo da peca2:");
    scanf("%d",&cod2);

    printf("Informe o valor da peca2");
    scanf("%f",&valor2);

    printf("informe a quantidade de pecas2: ");
    scanf("%d",&q2);

    vpg = (valor1*cod1 + valor2*cod2) *(API/100+1);


    printf("O valor a pagar: %.2f",vpg);

}