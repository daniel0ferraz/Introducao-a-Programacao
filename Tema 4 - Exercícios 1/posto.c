#include<stdio.h>
int main()
{
    float litros, total, desconto, total2;
    char combustivel;

    printf(" \n Digite A - Alcool OU para G - Gasolina: ");
    scanf("%c",&combustivel);
    
    if (combustivel == 'A' || combustivel == 'a')
    {
        printf("\n O combustivel escolhido foi Alcool 3.90L");
        printf("\n Digite a quantidade de litros:");
        scanf("%f",litros);

        if (litros <= 20.00)
        {
            total = litros * 3.90;
            desconto = litros * (3.90 * 0.03);
            total2= total - desconto;
            printf("\n Valor a pagar: %.2f", total2);
            } else if(litros > 20.00)
            {
                total = litros * 3.90;
                desconto = litros * (3.90 * 0.05);
                total2 = total - desconto;
                printf("\n Valor a pagar: %.2f", total2);
            }
    }

          else if(combustivel == 'G' || combustivel == 'g')
          {
              printf("\n O combustivel escolhido foi Gasolina 4.30L");
              printf("\n Digite a quantidade de litros:");
              scanf("%f", litros);

              if (litros <= 20.00)
              {
                  total = litros * 4.30;
                  desconto = litros * (4.30 * 0.04);
                  total2 = total - desconto;
                  printf("\n Valor a pagar %.2f", total2);
              } else if(litros >= 20.00)
                {
                    total = litros * 4.30;
                    desconto = litros * (4.30 * 0.06);
                    total2 = total - desconto;
                    printf("\n Valor a pagar %.2f", total2);
                }
              
          }
}