#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int encaixa(int a, int b){
    int casaa=1; //conta a quantidade de casas decimais de a
    double casab=1; //conta a quantidade de casas decimais de b
    double qtddez=0;

while(a=a/10>0){
    casaa++;
}
while(b=b/10>0){
    casab++;
}

qtddez=pow(10.0,casab);

    if(a%(int)qtddez==b){
        printf("1\n");


    }
    else printf("0\n");


}


int main(){

int a;
int b;

scanf("%d",&a);
scanf("%d",&b);

encaixa(a,b);

    return 0;
}