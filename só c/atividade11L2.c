#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    float e, f, g, h;
    const float d;
    printf("qual é o seu salario fixo?\n");
    scanf("%f", &d);
    printf("total do valor das vendas efetuadas\n");
    scanf("%f", &e);

    if (e <= 1500.00){
        f = e * 0.03;
        printf("a sua comissão foi de R$%.2f\n", f);
    } else if (e > 1500.00){
        f = e * 0.05;
        printf("a sua comissão foi de R$%.2f\n", f);
    }

    g = f + d;

    printf("seu salário total será R$%2.f ", g);

}
