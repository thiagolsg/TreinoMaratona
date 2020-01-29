#include <stdio.h>
#include <stdlib.h>

struct tipoData{
    int dia;
    int mes;
    int ano;

};

struct tipoPessoa{
    char nome[80];
    struct  tipoData dtNascimento;
};



struct tipoPessoa separaInfo( char nome [ 80 ] , int dt_nascimento ){
          
    struct tipoPessoa a;
    int contador=0;

    for(int i=0;nome[i]!='\0';i++){
        a.nome[i]=nome[i];
        contador++;
    }
        a.nome[contador]='\0';

        a.dtNascimento.ano=dt_nascimento/10000;
        a.dtNascimento.dia=dt_nascimento%100;
        a.dtNascimento.mes=(dt_nascimento/100)%100;

        return a;
} 

/*
int main(){

    char nome[80];
    int dt_nascimento=15062000;
    struct tipoPessoa a;

//for(int i;nome[i]!='\0';i++)
    scanf("%s",nome);

//scanf("%d",&dt_nascimento);
a=separaInfo(  nome  ,  dt_nascimento );
for(int i=0;a.nome[i]!='\0';i++)
printf("%c",a.nome[i]);

//printf("%d",a.dtNascimento.dia);

    return 0;
}
*/