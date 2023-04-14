#include <stdio.h>

#define PI 3.14159

int main()
{
    float raio, area, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3) * PI * (raio * raio * raio);
    area = 4 * PI * (raio * raio);

    printf("O volume da esfera é: %.2f\n", volume);
    printf("A área da superfície da esfera é: %.2f\n", area);

    return 0;
}
