#include<stdio.h>
int main(){
	int cont,par=0,impar=0;
	cont=1;
	
	while(cont<=20){ // condicão para que a repetição seja realizada 

		printf("%d\n",cont);
		cont++;// incremento da variavel para atualiza-la
		
    if(cont%2==0)
	   par++;
	   else
	   impar++;
	   	   
	    }
	   
	   printf("Par: %d\n",par);
	   printf("Impar: %d\n",impar);
}
