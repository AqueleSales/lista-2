#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;
    printf("de a nota da 1º prova:\n");
    scanf("%f", &a);
    printf("de a nota da 2º prova:\n");
    scanf("%f", &b);
    c = (a + b)/2;
    printf("a media foi %.1f .", c);
    if(c >= 7){
        printf("o aluno está aprovado!");
    }
    else{
        printf("o aluno está reprovado!");
    }
}
