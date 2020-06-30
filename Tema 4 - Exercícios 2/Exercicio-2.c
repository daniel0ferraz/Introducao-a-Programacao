#include <stdio.h>
#include <string.h>
main()
{
    float salario, novosalario, aumento;
    char cargo[20];

    printf("\n Informe o seu salario: ");
    scanf("%f", &salario);

    printf("\n Qual e o seu cargo? ");
    scanf("%s", &cargo);

    printf("\n Cargo informado %s", cargo);
    if (strcmp(cargo, "gerente") == 0)
        aumento = salario * 25 / 100;

    else if (strcmp(cargo, "engenheiro") == 0)
        aumento = salario * 20 / 100;

    else if (strcmp(cargo, "tecnico") == 0)
        aumento = salario * 15 / 100;
    else
        aumento = salario * 10 / 100;
        novosalario = aumento + aumento;

    printf("\n Salario:%8.2f", salario);
    printf("\n Novo salario: %8.2f", novosalario);
    printf("\n Aumento: %8.2f", aumento);
}