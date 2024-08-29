#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf("digite um numero ");
    scanf("%d", &a);
    if(a >= 0){
        printf("é positivo");
    }
    else{
        printf("é negativo");
    }
}
