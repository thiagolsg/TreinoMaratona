#include <stdio.h>
int main() {
    int l, c;
    int n=0;
    scanf("%d",&n);
 
if(n<1 || n>1000000){
    return 0;
}

  for (l=0; l<n; l++) {
 
        for(c=1; c<=n+l; c++){
     
            if(c<n-l){
          
                 printf(" ");
              
            }
            else {
          
                printf("*");
            }
        }
      
	    printf("\n");
    }
return 0;
}
 
 
 