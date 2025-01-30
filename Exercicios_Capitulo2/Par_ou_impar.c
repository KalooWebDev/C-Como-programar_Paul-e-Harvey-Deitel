#include <stdio.h>

int main(void){
    int numero;

    printf("Insira um numero e eu te direi se ele e par ou impar \n");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("Numero par");
    }

    if(numero % 2 != 0){
        printf("Numero impar");
    }

    return 0;
}