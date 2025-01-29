#include <stdio.h>

int main(void){
    int inteiro1, inteiro2, inteiro3;
    int maior, menor;

    printf("Insira tres inteiros:\n");
    scanf("%d%d%d", &inteiro1, &inteiro2, &inteiro3);

    printf("A soma e %d\n", inteiro1 + inteiro2 + inteiro3);
    printf("A media e %d\n", (inteiro1 + inteiro2 + inteiro3) / 3);
    printf("O produto e %d\n", inteiro1 * inteiro2 * inteiro3);

    // Verifica o menor entre os três números

    if(inteiro1 < inteiro2){
        menor = inteiro1;
    }

    if(inteiro1 > inteiro2){
        menor = inteiro2;
    }

    if(menor < inteiro3){
        printf("O menor e %d\n", menor);
    }

    if(menor > inteiro3){
        menor = inteiro3;
        printf("O menor e %d\n", menor);
    }

    // Verifica o maior entre os três números

    if(inteiro1 > inteiro2){
        maior = inteiro1;
    }

    if(inteiro1 < inteiro2){
        maior = inteiro2;
    }

    if(maior > inteiro3){
        printf("O maior e %d\n", maior);
    }

    if(maior < inteiro3){
        maior = inteiro3;
        printf("O maior e %d\n", maior);
    }

    return 0;
}