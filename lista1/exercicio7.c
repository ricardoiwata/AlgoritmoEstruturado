#include <stdio.h>

int main()
{
    int val1, val2;
    printf("Insira o primeiro valor inteiro: ");
    scanf("%d", &val1);
    printf("Insira o segundo valor inteiro: ");
    scanf("%d", &val2);

    int PROD = val1 * val2;
    printf("PROD = %d", PROD);
    return 0;
}