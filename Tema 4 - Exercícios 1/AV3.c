#include<stdio.h>
int main()
{
    /* */

    float litros, total, desconto;
    char combustivel;

    printf("Digite A para Alcool ou G para Gasolina:");
    scanf("%c",&combustivel);

 if (combustivel == 'a' && litros <= 20)
 {
     total = (litros * 3.30);
     desconto = total - (total *100/30);

     printf("O total de alcool a ser pago e: %2.f", desconto);
 } else {
     total = (litros * 3.90);
     desconto = total - (total *100/50);

     printf("O total de alcool a ser pago é %.2f", desconto);
 } if (combustivel == 'g' && litros <= 20)
 {
    total = (litros *4.30);
    desconto = total - (total *100/40);

    printf("O total de alcoll a ser pago e: %.2f", desconto);
 } else
 {
     total = (litros * 4.30);
     desconto = total - (total * 100/60);
 }
 
 
 
   