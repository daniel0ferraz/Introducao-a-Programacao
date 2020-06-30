#include<stdio.h>
main()
{
	float nota,soma=0,media,p10;
	int i,qa7=0,q10=0;
	for(i=1;i<=10;i++)
	{
		printf("\n Entre com a nota do aluno %d: ",i);
		scanf("%f",&nota);
		if(nota>7)
		  qa7=qa7+1; //ou qa7++;
		soma=soma+nota; //ou soma+=nota;
		if(nota==10)
		 q10=q10+1; //ou q10++;  
	}
	media=soma/10;
	p10=q10*100/10;
	printf("\n ========= Relatorio =========== ");
	printf("\n Quantidade de notas acima de 7   : %d",qa7);
	printf("\n Media da turma                   : %4.1f",media);
	printf("\n Porcentagem de notas iguais a 10 : %4.1f %%",p10);
}
