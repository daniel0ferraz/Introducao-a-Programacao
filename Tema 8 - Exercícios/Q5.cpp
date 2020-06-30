#include<stdio.h>
int main(){
	int Matricula, Aprovado=0,Reprovado=0,Total=0;
	float Nota1,Nota2,Nota3,Mediafinal;
	do{
		printf("\nMatricula:\n");
		scanf("%d",&Matricula);
		if(Matricula==9999){
			break;
		}
		printf("Nota1:");
		scanf("%f",&Nota1);
		printf("Nota2:");
		scanf("%f",&Nota2);
		printf("Nota3:");
		scanf("%f",&Nota3);
		
		Mediafinal = ((2*Nota1)+(3*Nota2)+(4*Nota3))/9;
		
		if(Mediafinal>=5){
			printf("\nAprovado");
			printf("\nMatricula: %d",Matricula);
			printf("\nMedia Final: %.1f",Mediafinal);
			Aprovado++;
		}else{
			printf("\nAprovado");
			printf("\nMatricula: %d",Matricula);
			printf("\nMedia Final: %.1f",Mediafinal);
			Reprovado++;
		}
	}while(Matricula!=9999);
	Total = Aprovado + Reprovado;
	printf("\nTotal de Alunos:%d",Total);
	printf("\nTotal de Aprovados: %d",Aprovado);
	printf("\nTotal de Reprovados: %d",Reprovado);

}
