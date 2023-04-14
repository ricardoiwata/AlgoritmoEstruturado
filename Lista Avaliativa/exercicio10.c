#include <stdio.h>

int main()
{
    int num, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um inteiro: ");
        scanf("%d", &num);
        soma += num;
    }

    float media = (float)soma / 10;
    printf("A média dos números é %.2f\n", media);

    return 0;
}
