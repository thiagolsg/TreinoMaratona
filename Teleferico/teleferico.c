#include <stdio.h>
#include <stdlib.h>

int main(){
    int c=0;
    int a=0;
    int divisao=0;

scanf("%d",&c);
    
    if(c < 2 || c > 100) {
        return 0;
    }

scanf("%d",&a);
    
    if(a < 1 || a > 1000) {
        return 0;
    }


divisao=a/(c-1);

    if(a%(c-1)==0){
        printf("%d\n",divisao);
        return 0;
    }
    else {
        divisao++;

    }

printf("%d\n",divisao);

    return 0;
}