#include <stdio.h>

int main()
{
    float a,b,soma,divi,mult,sub;

    printf("Digite o primeiro numero: ");
    scanf("%f",&a);

    printf("Digite o segundo numero: ");
    scanf("%f",&b);
        soma= a+b;
    printf("A soma e : %f \n",soma);
        sub= a-b;
    printf("A subtracao e : %f \n",sub);
        divi = a/b;
    printf("A Divisao e : %f \n",divi);
        mult= a*b;
    printf("A Multiplicacao e : %f \n",mult);

    return 0;
}