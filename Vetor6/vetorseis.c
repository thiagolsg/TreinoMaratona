#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    
    scanf("%d",&n);

    int vet1[n];
    int vet2[n];
    int vets[n];

for(int i=0;i<n;i++)
    scanf("%d",&vet1[i]);

for(int i=0;i<n;i++)
    scanf("%d",&vet2[i]);

for(int i=0;i<n;i++)
    vets[i]=vet1[i]+vet2[i];

for(int i=0;i<n;i++){
    if(i!=n-1)
    printf("%d ",vets[i]);    
        if(i==n-1){
            printf("%d",vets[i]);
        }

}
printf("\n");
    return 0;
}