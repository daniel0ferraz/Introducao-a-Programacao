#include<stdio.h>
main()
{
	char RESP='S';
	float VOLUME,RAIO,ALTURA;
	while(RESP=='S')
	{
		printf("\n ---------------------");
		printf("\n Raio  : "); scanf("%f",&RAIO);
		printf("\n Altura: "); scanf("%f",&ALTURA);
		VOLUME=3.14159*(RAIO*RAIO)*ALTURA;
		printf("\n Volume da lata = %8.3f",VOLUME);
		printf("\n\n Tem mais lata (S/N)? ");
		scanf(" %c",&RESP);
	}
}
