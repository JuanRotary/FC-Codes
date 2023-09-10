#include <stdio.h>

int main()
{
    int nota1 , nota2, sub, frequencia;
    printf("Digite a nota 1:");
    scanf("%d", &nota1);
    printf("Digite a nota 2:");
    scanf("%d", &nota2);
   
    printf("Digite a frequencia:");
    scanf("%d", &frequencia);
   
    int media = (nota1+nota2)/2;
   
    if(media >= 6 && frequencia >= 75){
        printf("Aluno APROVADO");
    }else{
        printf("Digite a nota da SUB: ");
        scanf("%d", &sub);
       
        media = (media + sub)/ 2;
       
        if(media >= 6)
            printf("Aluno APROVADO no Exame");
        else
            printf("Nos vemos no ano que vem");
    }
    return 0;
},33