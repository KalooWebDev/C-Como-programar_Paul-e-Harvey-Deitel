#include <stdio.h>

int main(void){
    int interio1, inteiro2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &interio1, &inteiro2);

    printf("Soma:\n%d + %d = %d\n", interio1, inteiro2, interio1 + inteiro2);
    printf("Produto:\n%d * %d = %d\n", interio1, inteiro2, interio1 * inteiro2);
    printf("Diferenca:\n%d - %d = %d\n", interio1, inteiro2, interio1 - inteiro2);
    printf("Quociente:\n%d / %d = %d\n", interio1, inteiro2, interio1 / inteiro2);
    printf("Modulo:\n%d mod %d = %d\n", interio1, inteiro2, interio1 % inteiro2);

	return 0;
}