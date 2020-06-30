#include<stdio.h>
int main(){
        int num,
        tabuada = 1;// inicialização;
        printf("Entre com um numero para a tabuada.\n");
        scanf("%d",&num);
        
        while(tabuada<=10){// vericicação do laço se tabuada que é 1 é menor que 20, assim repetindo
        printf("Tabuada do numero: %d x %d = %d\n",num, tabuada,num*tabuada);
        tabuada++;
		}
}
