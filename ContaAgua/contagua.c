#include <stdio.h>
#include <stdlib.h>

int main(){

int n=0;
int total=0;
int total1=0;
int total2=0;
int total3=0;
int conta=0;

scanf("%d",&n);

if(n<0 || n>1000){
    return 0;
}
if(n<=10){
    total=7;
}
if(n>=11 && n<=30){
    total=7;
    total1=(n-10);
}
if(n>=31 && n<=100){
    total=7;
    total1=20;
    total2=((n-31)*2)+2;
}
if(n>=101){
    total=7;
    total1=20;
    total2=140;
    total3=((n-101)*5)+5;
}

conta=total+total1+total2+total3;

printf("%d\n",conta);

    return 0;
}