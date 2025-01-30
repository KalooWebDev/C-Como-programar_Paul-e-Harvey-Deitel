#include <stdio.h>

int main(void){
    int inteiro1, inteiro2, inteiro3, inteiro4, inteiro5;
    int maior, menor;

    printf("Insira cinco numeros inteiros: \n");
    scanf("%d%d%d%d%d", &inteiro1, &inteiro2, &inteiro3, &inteiro4, &inteiro5);

    // Verifica se o primeiro número é maior que o segundo
    if(inteiro1 > inteiro2){
        // Inteiro1 é maior
        maior = inteiro1;
        // Inteiro2 é menor
        menor = inteiro2;
    }

    // Verifica se o primeiro numero é menor que o segundo
    if(inteiro1 < inteiro2){
        // Inteiro2 é maior
        maior = inteiro2;
        // Inteiro1 é menor
        menor = inteiro1;
    }

    // Verifica se o maior número é maior que o terceiro número
    if(maior > inteiro3){
        // O maior número não é alterado
        maior = maior;
    }

    // Verifica se o maior número é menor que o terceiro número
    if(maior < inteiro3){
        // inteiro3 é maior
        maior = inteiro3;
    }

        // Verifica se o menor número é menor que o terceiro número
    if(menor < inteiro3){
        // O menor não é alterado
        menor = menor;
    }

     // Verifica se o menor número é maior que o terceiro número
    if(menor > inteiro3){
        // Inteiro3 é menor
        menor = inteiro3;
    }

    // Verifica se o maior número é maior que o quarto número
    if(maior > inteiro4){
        // O maior número não é alterado
        maior = maior;
    }

    // Verifica se o maior número é menor que o quarto número
    if(maior < inteiro4){
        // Inteiro4 é maior
        maior = inteiro4;
    }

        // Verifica se o menor número é menor que o terceiro número
    if(menor < inteiro4){
        // O menor não é alterado
        menor = menor;
    }

     // Verifica se o menor número é maior que o quarto número
    if(menor > inteiro4){
        // Inteiro4 é menor
        menor = inteiro4;
    }

    // Verifica se o maior número é maior que o quinto número
    if(maior > inteiro5){
        // O maior número não é alterado
        maior = maior;
    }

    // Verifica se o maior número é menor que o quinto número
    if(maior < inteiro5){
        // Inteiro4 é maior
        maior = inteiro5;
    }

    // Verifica se o menor número é menor que o quinto número
    if(menor < inteiro5){
        // O menor não é alterado
        menor = menor;
    }

    // Verifica se o menor número é menor que o quinto número
    if(menor > inteiro5){
        // Inteiro5 é menor
        menor = inteiro5;
    }

    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d", menor);

    return 0;
}