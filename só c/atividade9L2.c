#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int a, b, c, e=0;
    float f, g, h, i, j;
    const int d = 40;
    printf("quantas horas voc� trabalhou em um dia?\n");
    scanf("%d", &a);
    printf("quanto voc� ganha por horas trabalhadas?\n");
    scanf("%f", &f);
    b = a * 5;
    c = b * 4;
    if (b >= d) {
        printf("voc� atingiu a meta de uma jornada de trabalho nessa semana\n");
        if (b > d) {
        e = b - d;
    }
    } else {
        printf("voc� n�o atingiu a meta da jornada de trabalho nessa semana\n");
    }
    if (e > 0) {
        printf("voc� fez %d horas extras nesta semana\n", e);
    } else {
        printf("Voc� n�o fez horas extras nesta semana\n");
    }
    printf("voc� teve o total de %d horas trabalhadas em uma semana\ne %d horas trabalhadas em um m�s\n", b, c);

    g = f * a;
    h = f * c;
    if (e > 0) {
    i = e  * f * 0.5;
    j = h + i;
    } else{
        j = h;
    }

    printf("voc� vai ganhar R$%.2f de salario por hora e por m�s R$%.2f\n", g, h);
    if (e>0){
        printf("com as horas extras seu sal�rio total no m�s sera de R$%2.f", j);
    }


}
