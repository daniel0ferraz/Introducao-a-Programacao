#include<stdio.h>
main()
{
	int i=1;
	float C,F;
	
	while(i<=5)
	{
		printf("\n Celsius :"); scanf("%f",&C);
		F=(9*C+160)/5;
		printf("\n Farenheit : %f",F);
		i++;
    }
}
