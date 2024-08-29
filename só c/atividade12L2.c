#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, d, e;
    printf("digite o seu cpf (só os numeros):\n");
    scanf("%d", &a);

    srand(time(NULL));
    {
        b = rand() % 9999;
        printf ("seu saldo é de %d \n", b);
        c = rand() % 9999;
        printf ("seu débito é de %d \n", c);
        d = rand() % 9999;
        printf ("seu crédito é de %d \n", d);
    }
    e = b - c + d;

    if (e <= 0){
        printf("saldo atual está negativo, R$%d\n", e);
    } else {
        printf("saldo atual está positivo, R$%d\n", e);
    }


}
