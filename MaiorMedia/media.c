#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int vet[n];
    int vetaux[n];
    int soma=0;
    int bool=0;
    int contador=0;

for(int i=0;i<n;i++)
    scanf("%d",&vet[i]);

for(int i=0;i<n;i++)
    soma=soma+vet[i];

for(int i=0;i<n;i++)
    if((soma/n) < vet[i]){
      //  printf("%d ",vet[i]);
        contador++;    
        bool=1;
        vetaux[contador]=vet[i];
    }
for(int i=1;i<=contador;i++){
     if(i!=contador)
    printf("%d ",vetaux[i]);    
        if(i==contador){
            printf("%d",vetaux[i]);
        }
}


if(!bool)
    printf("0");

printf("\n");

    return 0;
}