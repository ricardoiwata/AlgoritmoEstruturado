#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Insira o valor de A:");
    scanf("%d", &a);
    printf("Insira o valor de B:");
    scanf("%d", &b);
    printf("Insira o valor de C:");
    scanf("%d", &c);
    printf("Insira o valor de D:");
    scanf("%d", &d);
    if (a > 0 && b > 0 && c > 0 && d > 0)
    {
        if (c < b && c > a && (c + d) > (a + b) && a % 2 == 0)
            printf("Valores aceitos");
        else
            printf("Valores nao aceitos");
    }
    else
        prinft("Valores nao aceitos");
    return 0;
}