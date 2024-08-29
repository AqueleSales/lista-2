#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, d;
    printf("quantidade atual em estoque?\n");
    scanf("%d", &a);
    printf("qual a quantidade máxima do produto?\n");
    scanf("%d", &b);
    printf("qual a quantidade mínima do produto?\n");
    scanf("%d", &c);

    d = (b+c)/2;

    printf("a quatidade média do produto é %d, ", d);

    if (a >= d){
         printf("não efetuar compra");
    } else {
        printf("efetuar compra");
    }
}
