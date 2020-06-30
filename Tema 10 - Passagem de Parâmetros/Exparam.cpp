#include<stdio.h>
float Areadotriangulo(int b,int a){
	  return(a*b/2);
}
int main(){
	int base, alt; float res;
	printf("Informe a base do triangulo:");
	scanf("%d",&base);
	printf("Informe a altura:");
	scanf("%d",&alt);
	res = Areadotriangulo(base,alt);
	printf("A Area do Triangulo e: %f",res);
	
}
