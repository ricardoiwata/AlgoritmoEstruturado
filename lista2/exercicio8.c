#include <stdio.h>

int main()
{
    char estado[2];
    float valor, imposto;
    printf("Insira o estado: ");
    scanf("%s", &estado);
    printf("Insira o valor do produto: ");
    scanf("%f", &valor);
    if (estado == 'mg' || estado == 'MG' || estado == 'Mg' || estado == 'mG')
    {
        imposto = 0.07;
        printf("O valor final do produto é %.2f", (valor + (valor / imposto)));
    }
    else if (estado == 'sp' || estado == 'SP' || estado == 'Sp' || estado == 'sP')
    {
        imposto = 0.12;
        printf("O valor final do produto é %.2f", (valor + (valor / imposto)));
    }
    else if (estado == 'rj' || estado == 'RJ' || estado == 'Rj' || estado == 'rJ')
    {
        imposto = 0.15;
        printf("O valor final do produto é %.2f", (valor + (valor / imposto)));
    }
    else if (estado == 'ms' || estado == 'MS' || estado == 'Ms' || estado == 'sM')
    {
        imposto = 0.08;
        printf("O valor final do produto é %.2f", (valor + (valor / imposto)));
    }
    else
        printf("Insira um estado correto ");
    return 0;
}