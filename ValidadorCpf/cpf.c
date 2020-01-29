#include <stdio.h>
#include <stdlib.h>

int main(){
    char cpf[12];//recebe o cpf em string
    int aux1=10; //peso da primeira parte que começa com 10
    int aux2=11; //peso da segunda parte que começa com 11
    int total1[11]; //numeros multiplicados com pesos para achar o primeiro digito
    int total2[11]; //numeros multiplicados com pesos para achar o segundo digito
    int total11=0; //numeros multiplicados pelo primeiro peso somados
    int total22=0; //numeros multiplicados pelo segundo peso somados
    int cpfi[11]; //recebe o cpf que esta em string para int
    int pd=0; //primeiro digito verificador
    int sd=0; //segundo digito verificador
    int pdb=0; //variavel boleana para confirmar que o segundo digito é verdadeiro 
    int count=0; //variavel para contar quantos caracteres foram lidos

scanf(" %s",cpf);

for(int i=0;cpf[i]!='\0';i++){
    count++;
}

if(count!=11)
return 0;

for(int i=0;cpf[i]!='\0';i++){
    cpfi[i]=cpf[i]-'0';
    
}


for(int i=0;i<12;i++){
    if(aux1>=2){
        total1[i]=cpfi[i]*aux1;
        aux1--;
    }

}
for(int i=0;i<9;i++){
    total11=total11+total1[i];
//    printf("\n%d\n",total11);
}
//printf("\n%d\n",total11);

pd=11-(total11%11);

if(pd>9){

pd=0;

}

//printf("\n%d\n",pd);

if(cpfi[9]==pd){
    pdb=1;
}
else {
    printf("invalido\n");
    return 0;
}


for(int i=0;i<12;i++){
    if(aux2>=2){
        total2[i]=cpfi[i]*aux2;
        aux2--;
    }

}
for(int i=0;i<10;i++){
    total22=total22+total2[i];
//    printf("\n%d\n",total22);
}
sd=11-(total22%11);

if(sd>9){

sd=0;

}

//printf("\n%d\n",sd);

if(cpfi[10]==sd && pdb){
    printf("valido\n");
}
else {
    printf("invalido\n");
}
    return 0;
}