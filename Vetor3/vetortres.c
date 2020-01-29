#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);
    int vet[n];
    int contadorpar=0;
    int vetpar[n];
    int vetimpar[n];
    int contadorimpar=0;

for(int i=0;i<n;i++){

    scanf("%d",&vet[i]);

}

for(int i=0;i<n;i++){

    if(vet[i]%2==0){
        contadorpar++;
        vetpar[contadorpar]=vet[i];
    }
    else {
        contadorimpar++;
        vetimpar[contadorimpar]=vet[i];
    }
}
for(int i=1;i<=contadorpar;i++){
     if(i!=contadorpar)
    printf("%d ",vetpar[i]);    
        if(i==contadorpar){
            printf("%d",vetpar[i]);
        }
}
printf("\n");
for(int i=1;i<=contadorimpar;i++){
     if(i!=contadorimpar)
    printf("%d ",vetimpar[i]);    
        if(i==contadorimpar){
            printf("%d",vetimpar[i]);
        }
}
printf("\n");

    return 0;
}