#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, e;
    float f, g, h, i, j;
    printf("qual o seu sexo?\nhomem = 1 mulher = 2\n");
    scanf("%d", &a);
    printf("qual a sua altura?\n");
    scanf("%f", &f);

    if (a == 1){
        g = (72.7 * f) - 58;
    } else if (a ==2) {
        g = (62.1 * f) - 44.7;
    } else {
        printf("sexo inválido");
    }

    printf("seu peso ideal é %2.f kg", g);
}
