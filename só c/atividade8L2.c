#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b = 24, d, e, f, h, i;
    float g;
    char c[10], j[10];

    printf("Digite a hora de início (0-23):\n");
    scanf("%d", &a);

    printf("Informe o dia da semana (seg, ter, qua, qui, sex, sab, dom):\n");
    scanf("%s", c);

    if (strcmp(c, "seg") == 0) {
        d = 1;
    } else if (strcmp(c, "ter") == 0) {
        d = 2;
    } else if (strcmp(c, "qua") == 0) {
        d = 3;
    } else if (strcmp(c, "qui") == 0) {
        d = 4;
    } else if (strcmp(c, "sex") == 0) {
        d = 5;
    } else if (strcmp(c, "sab") == 0) {
        d = 6;
    } else if (strcmp(c, "dom") == 0) {
        d = 7;
    } else {
        printf("Dia inválido.\n");
        return;
    }

    e = (a + b) % 24;

    printf("O jogo começou no dia %s às %d:00 e pode durar até %d horas.\n", c, a, b);
    printf("O horário máximo de término é %d:00 do dia seguinte.\n", e);

    printf("Informe quantas horas durou o jogo (1-12):\n");
    scanf("%d", &f);

    printf("Informe quantos minutos durou o jogo (0-59):\n");
    scanf("%f", &g);

    h = (a + f) % 24;
    i =d + (a + f) / 24;
    if (i > 7) {
        i -= 7;
    }

    if(i == 1) {
        strcpy(j, "seg");
    } else if (i == 2) {
        strcpy(j, "ter");
    } else if (i == 3) {
        strcpy(j, "qua");
    } else if (i == 4) {
        strcpy(j, "qui");
    } else if (i == 5) {
        strcpy(j, "sex");
    } else if (i == 6) {
        strcpy(j, "sab");
    } else if (i == 7) {
        strcpy(j, "dom");
    }

    printf("o jogo terminou na %s às %d:%02.0f.\n", j, h, g);
}
