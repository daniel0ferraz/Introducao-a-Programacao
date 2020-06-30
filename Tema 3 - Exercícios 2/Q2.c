#include<stdio.h>
main()
{
    /*  Fazer um algoritmo ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm). */
    float chuva,milimetros;

    printf("Informe a quantidade de chuva:");
    scanf("%f",&chuva);

    milimetros = chuva*25.4;
    printf("A quantidade de chuva por milimetros e: %f",milimetros);


}