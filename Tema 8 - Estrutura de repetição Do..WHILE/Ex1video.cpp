#include<stdio.h>
int main(){
	int a,b, maior, menor;
	
	printf("Digite dois valores inteiros:");
	scanf("%d",&a);
	scanf("%d",&b);
	do{
		printf("%d\n",a);
		a++;
		
	}while(a<b);
	printf("Fim do programa!");
}
