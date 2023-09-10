#include<stdio.h>
#include<string.h>

int main(){

char nome[100];

printf("Digite um nomem");
fgets (nome,100,stdin);
nome[strlen(nome)-1]='\0';
printf("O nome é %s certo ?",nome);
}