#include<stdio.h>
main()
{
	float nota=1,soma=0,media,p10;
	int q=0,qa7=0,q10=0;
	while(nota>=0)
	{
		printf("\n Entre com a nota do aluno : ");
		scanf("%f",&nota);
		if(nota<0)
		  break;
		q++;  
		if(nota>7)
		  qa7=qa7+1; //ou qa7++;
		soma=soma+nota; //ou soma+=nota;
		if(nota==10)
		 q10=q10+1; //ou q10++;  
	}
	media=soma/q;
	p10=q10*100/q;
	printf("\n ========= Relatorio =========== ");
	printf("\n Quantidade de notas acima de 7   : %d",qa7);
	printf("\n Media da turma                   : %4.1f",media);
	printf("\n Porcentagem de notas iguais a 10 : %4.1f %%",p10);
}
