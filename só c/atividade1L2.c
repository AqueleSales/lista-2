#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf("digite um numero ");
    scanf("%d", &a);
    if(a >= 10){
        printf("e maior que 10");
    }
    else{
        printf("nao e maior que 10");
    }
}
