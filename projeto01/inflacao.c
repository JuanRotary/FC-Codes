#include <stdio.h>

int main() {
    float mes;
    float anterior;
    float inflacao;

    printf("Digite o valor do produto ao longo de 12 mêses \n");
    printf("Digite o valor do produto no primeiro mês: ");
    scanf("%f",&anterior);

    for (int i = 2; i <=12; i++)
    {
        printf("Digite o valor do produto no mês %d R$: ",i);
        scanf("%f",&mes);

        inflacao = ((mes-anterior)/anterior)*100;
    }
    
printf("A inflação ao longo de 12 meses é %.2f",inflacao);

return 0;
}
