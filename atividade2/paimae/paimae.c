#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
char nome[60];
char pai[60];
char mae[60];

printf("Digite o seu nome: ");
fgets(nome,60,stdin);
nome[strlen(nome)-1]='\0';

printf("Digie o nome do seu pai: ");
fgets(pai,60,stdin);
pai[strlen(pai)-1]='\0';

printf("Digie o nome da sua mãe: ");
fgets(mae,60,stdin);
mae[strlen(mae)-1]='\0';

printf("%s %s %s \n",nome,pai,mae);
}