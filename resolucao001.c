#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, delta;

    printf("Digite os coeficientes da equação do segundo grau (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    printf("O valor de delta é: %.2lf\n", delta);
}