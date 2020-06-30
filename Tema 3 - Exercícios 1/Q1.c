#include<stdio.h>
main()
{
    /*1. Dado um número inteiro não-nulo, imprima o seu quadrado. */

    int numero, quadrado;

    printf("Informe  um numero nao nulo: ");
    scanf("%d",&numero);

    quadrado = numero* numero;

    printf("/n O quandrado do numero informado é: %d e"  "%d",quadrado,numero);

}