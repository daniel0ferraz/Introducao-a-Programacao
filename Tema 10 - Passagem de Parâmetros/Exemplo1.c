#include<stdio.h>
// Passagem de Parametro por Referencia
void troca(int *n1,int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
int main(){
    int a,b;
    printf("Informe dois numeros:");
    scanf("%d %d",&a,&b);
    printf("Antes: %d - %d\n",a,b);
    troca(&a,&b);
    printf("Apos: %d - %d\n",a,b);
}
