#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, d, e;
    printf("digite o seu cpf (s� os numeros):\n");
    scanf("%d", &a);

    srand(time(NULL));
    {
        b = rand() % 9999;
        printf ("seu saldo � de %d \n", b);
        c = rand() % 9999;
        printf ("seu d�bito � de %d \n", c);
        d = rand() % 9999;
        printf ("seu cr�dito � de %d \n", d);
    }
    e = b - c + d;

    if (e <= 0){
        printf("saldo atual est� negativo, R$%d\n", e);
    } else {
        printf("saldo atual est� positivo, R$%d\n", e);
    }


}
