#include <stdio.h>

int main()
{
    int n, i, fib, fib_ant1, fib_ant2;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    fib_ant2 = 0;
    fib_ant1 = 1;

    if (n == 0)
    {
        fib = 0;
    }
    else if (n == 1)
    {
        fib = 1;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            fib = fib_ant1 + fib_ant2;
            fib_ant2 = fib_ant1;
            fib_ant1 = fib;
        }
    }

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fib);

    return 0;
}
