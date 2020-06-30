#include<stdio.h>
main()
{
	char RESP='S',sexo;
	int idade,soma=0,total=0,somaF=0,qf=0,qm=0,maior,menor;
	float pM,mediaF,media;
	while(RESP=='S')
	{
		printf("\n Idade :"); scanf("%d",&idade);
		printf("\n Sexo  :"); scanf(" %c",&sexo);
		soma=soma+idade;
		total=total+1;
		if(sexo=='F')
		{
			somaF=somaF+idade;
			qf=qf+1;
		}
		else
		    qm++;
		if((idade>maior) || (total==1))
		 maior=idade;
		if((idade<menor) || (total==1))
		 menor=idade;
		printf("\n\n Continuar (S/N)? ");
		scanf(" %c",&RESP);
    }
    media=soma/total;
    mediaF=somaF/qf;
    pM=qm*100/total;
    printf("\n Media de todas as idades      : %5.1f ",media);
    printf("\n Media das idades das mulheres : %5.1f ",mediaF);
    printf("\n Porcentagem de homens         : %5.1f %%",pM);
    printf("\n Maior idade                   : %d ",maior);
    printf("\n Menor idade                   : %d ",menor);
}
