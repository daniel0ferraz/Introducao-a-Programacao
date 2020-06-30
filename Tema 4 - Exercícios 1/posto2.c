#include <stdio.h>
int main()
{
    float litros = 0, total = 0, desconto = 0, total2 = 0;
    char combustivel;

    printf("Digite o combustivel: A - Alcool ou G - Gasolina \n");
    scanf("%c", &combustivel);
    if (combustivel == 'A' || combustivel == 'a')
    {
        printf("O combustivel escolhido Alcool = 3.90/L\n");
        printf("Digite a quantidade de litros:\n");
        scanf("%f", &litros);

        if (litros <= 20.00)
        {
            total = litros * 3.90;
            desconto = litros * (3.90 * 0.03);
            total2 = total - desconto;
            printf("Valor a ser pago %.2f\n", total2);
        }
        else if (litros > 20.00)
        {
            total = litros * 3.90;
            desconto = litros * (3.90 * 0.05);
            total2 = total - desconto;
            printf("Valor a ser pago %.2f\n", total2);
        }
    }
    else if (combustivel == 'G' || combustivel == 'g')
    {
        printf("\n O combustivel escolhido Gasolina: 4.30/L");
        printf("\n Digite a quantidade de litros:");
        scanf("%f", &litros);
        if (litros <= 20.00)
        {
            total = litros * 4.30;
            desconto = litros * (4.30 * 0.04);
            total2 = total - desconto;
            printf("Valor a ser pago: %.2f\n", total2);
        }
        else if (litros > 20.00)
        {
            total = litros * 4.30;
            desconto = litros * (4.30 * 0.06);
            total2 = total - desconto;
            printf("Valor a ser pago: %.2f\n", total2);
        }
    }
}
