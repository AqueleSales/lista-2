#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    printf("digite o ano que estamos\n");
    scanf("%d", &a);
    printf("digite o ano que você nasceu\n");
    scanf("%d", &b);
    c = a - b;
    printf("voce tem %d anos ", c);
    if(c >= 16){
        printf("ta podendo votar");
    }
    else{
        printf("não ta podendo votar");
    }
}
