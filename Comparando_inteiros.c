#include <stdio.h>

int main(void){
    int inteiro1, inteiro2;

    printf("Insira dois numeros inteiros:\n");
    scanf("%d%d", &inteiro1, &inteiro2);

    if(inteiro1 > inteiro2){
        printf("%d e maior que %d", inteiro1, inteiro2);
    }

    if(inteiro1 < inteiro2){
        printf("%d e menor que %d", inteiro1, inteiro2);
    }

    if(inteiro1 == inteiro2){
        printf("%d e igual a %d", inteiro1, inteiro2);
    }

    return 0;
}