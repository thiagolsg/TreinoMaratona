#include <stdio.h>
#include <stdlib.h>

int main(){

int n=0;

scanf("%d",&n);

if(n<1 || n>100){
    return 0;
}

for(int i=1;i<=n;i++){
    
    printf("%02d",i);

    for(int j=2;j<=i;j++){
        printf(" %02d",i);
    }
    printf ("\n");
}

printf("\n");
for(int i=1;i<=n;i++){
    
    printf("%02d",1);

    for(int j=2;j<=i;j++){
    
        printf(" %02d",j);
    }
    printf ("\n");
}

    return 0;
}