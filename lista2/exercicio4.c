#include <stdio.h>

int main()
{
    float salario, parcela;
    printf("Insira o seu salário: ");
    scanf("%f", &salario);
    printf("Insira o valor da parcela do empréstimo: ");
    scanf("%f", &parcela);
    if (parcela > (salario / 5))
        printf("Empréstimo não concedido");
    else
        printf(" Empréstimo concedido");
    return 0;
}