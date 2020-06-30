#include<stdio.h>
main()
{
    /*Escrever um algoritmo que leia o nome de um funcionário, seu numero de horas trabalhadas, o valor que recebe por hora, o número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o salário total deste funcionário. Ao final escreva o seu nome e o seu salário total.*/
    char nome[40];
    int qfilhos, horastrab;
    float salario, valorh,salariototal;

    printf("\n Nome do funcionario:");
    scanf("%s",&nome);

    printf(" \n Valor recebido por horas: ");
    scanf("%f",&valorh);

    printf("\n número de filhos com idade menor que 14 anos:");
    scanf("%d",&qfilhos);

    printf("\n Informe o salario:");
    scanf("%f",&salario);

    salariototal = (valorh*qfilhos) + salario;

    printf(" \n %s o seu salario sera: %.2f",nome,salariototal);

}
