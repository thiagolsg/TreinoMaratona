#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    int x;

scanf("%d",&n);

 int vetor[n];
 
for(int i=0;i<n;i++){
    scanf("%d",&vetor[i]);

}

scanf("%d",&x);

for(int i=0;i<n;i++){
   if(x==vetor[i]){
       printf("pertence\n");
       return 0;
   }

}

printf("nao pertence\n");

    return 0;
}