#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,x2,y2;
    float distancia,pot1,pot2,rad;


 printf("Digite o valor de X do ponto A \n");
 scanf("%i",&x1);
 
 printf("Digite o valor de y do ponto A \n");
 scanf("%i",&y1);
 
 printf("Digite o valor de X do ponto B \n");
 scanf("%i",&x2);

 printf("Digite o valor de y do ponto C \n");
 scanf("%i",&y2);

 pot1= pow((x2-x1),2);
 pot2= pow((y1-y2),2);
 rad = sqrt(pot1+pot2);

 distancia=rad;

 printf(" A distancia entre os dois pontos é de:  %.2f \n",distancia);

 return 0;

}