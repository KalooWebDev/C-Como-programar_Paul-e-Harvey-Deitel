#include <stdio.h>

int main(void){
    int inteiro1, inteiro2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &inteiro1, &inteiro2);

    if(inteiro1 % inteiro2 == 0){
        printf("O primeiro numero e multiplo do segundo");
    }

    if(inteiro1 % inteiro2 != 0){
        printf("O primeiro numero nao e multiplo do segundo");
    }
    
    return 0;
}