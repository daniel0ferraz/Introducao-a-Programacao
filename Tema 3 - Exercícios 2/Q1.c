#include<stdio.h>
main()
    /* Fazer um algoritmo ler uma temperatura dada em graus Celsius e imprimir o equivalente em Farenheit.
    */
{
    float C,F;

        printf("\nInforme os graus C:");
        scanf("%f",&C);

         F = C * 9/5 + 32;

        printf("\n O valor convertido: %.2f e graus %.2f", F,C);
}
