#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos P1(%.2f, %.2f) e P2(%.2f, %.2f) eh %.4f\n", x1, y1, x2, y2, distancia);

    return 0;
}
