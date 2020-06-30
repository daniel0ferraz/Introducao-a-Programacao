#include <stdio.h>
main()
{
    float N1, N2, N3, M;
    printf("\nEntre com a nota 1: ");
    scanf("%f", &N1);
    printf("\nEntre com a nota 2: ");
    scanf("%f", &N2);
    printf("\nEntre com a nota 3: ");
    scanf("%f", &N3);
    M = (N1 + N2 + N3) / 3;
    printf("A media e' %.1f \n", M);
}