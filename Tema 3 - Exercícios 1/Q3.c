#include<stdio.h>
main()
{
    /* Faça um programa que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. */

    float N1,N2,N3, M;

    printf("\nEntre com a nota 1: ");
    scanf("%f", &N1);
    printf("\nEntre com a nota 2: ");
    scanf("%f", &N2);
    printf("\nEntre com a nota 3: ");
    scanf("%f", &N3);
    M = (N1*2 + N2*3 + N3*5) /10;
    printf("A media e' %.1f \n", M);
}