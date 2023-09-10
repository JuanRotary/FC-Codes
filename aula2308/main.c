#include<stdio.h>

int main(){
char letra[8];
printf("Digite uma tecla> ");
scanf("%c%c%c%c%c%c%c%c",&letra);
printf("Você pressionou a tecla  %i%i%i%i%i%i%i%i\n",letra);
return(0);
}