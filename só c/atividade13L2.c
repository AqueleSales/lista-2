#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, d;
    printf("quantidade atual em estoque?\n");
    scanf("%d", &a);
    printf("qual a quantidade m�xima do produto?\n");
    scanf("%d", &b);
    printf("qual a quantidade m�nima do produto?\n");
    scanf("%d", &c);

    d = (b+c)/2;

    printf("a quatidade m�dia do produto � %d, ", d);

    if (a >= d){
         printf("n�o efetuar compra");
    } else {
        printf("efetuar compra");
    }
}
