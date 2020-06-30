#include <stdio.h>
main()
{
    /*Um banco concede um crédito especial aos seus clientes, variável com o saldo médio no último ano. Construa um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito. 
    Considerar:

    -  Saldo médio  de 0 a 200:  nenhum crédito 

    - Saldo médio de 200,01 a 400:  20% do valor do saldo médio 

    - Saldo médio de 400,01 a 600: 30% do valor do saldo médio 

    - Saldo médio acima de 600,01: 40% do valor do saldo médio
        
    */

    float saldo,credito;

    printf("\n Informe seu saldo:");
    scanf("%f",&saldo);

    if (saldo < 200)
    {
        credito = 0;
    }else if(saldo < 400 ){
        saldo = credito*20/100;
    } else if (saldo < 600){
        saldo = credito*30/100; 
    } else{

        saldo=credito*40/100;

        printf("\n Saldo Medio = %.2f",saldo);
        printf("\n Valor do Credito = %.2f",credito);
     }
     
    }