#include<stdio.h>
main()
{
	int i=1;
	float VOLUME,RAIO,ALTURA;
	while(i<=10)
	{
		printf("\n ---------------------");
		printf("\n Raio  : "); scanf("%f",&RAIO);
		printf("\n Altura: "); scanf("%f",&ALTURA);
		VOLUME=3.14159*(RAIO*RAIO)*ALTURA;
		printf("\n Volume da lata = %8.3f",VOLUME);
		i++;
	}
}
