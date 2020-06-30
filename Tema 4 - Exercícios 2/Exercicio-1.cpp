#include<stdio.h>
int main()
{
    int idade;

    printf("Informe sua Idade: ");
    scanf("%d",&idade);

    if ( (idade >=5) || (idade <=7)){
        printf("\n Infantil A ");
    } else if((idade >= 8 ) && (idade <=10)){
        printf("\n Infantil B ");
    } else if((idade >=11) && (idade <=13)){
        printf("\n Juvenil A ");
    } else if ((idade >=14) && (idade <=17)){
        printf("\n Juvenil B ");
    } else {
        printf("\n Adulto ");
    }
}