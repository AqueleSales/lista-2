#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a;
    float b;
    printf("quantas ma�as voc� comprou?:\n");
    scanf("%d", &a);
    if(a >= 12){
        b = a * 1.00;
        printf("o total de ma�as foram %d e o custo total deu de R$%.2f", a, b);
    }
    else{
        b = a * 1.30;
        printf("o total de ma�as foram %d e o custo total deu de R$%.2f", a, b);
    }
}
