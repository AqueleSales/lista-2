#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;
    printf("digite um valor\n");
    scanf("%f", &a);
    printf("digite outro valor diferente:\n");
    scanf("%f", &b);
    if(a == b){
        printf("são iguais");
    }
    else if(a > b){
            printf("%.2f > %.2f", a, b);
        }
        else{
            printf("%.2f > %.2f", b, a);
        }
}
